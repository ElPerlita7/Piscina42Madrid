/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle_solve.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontesd <dmontesd@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 22:00:21 by dmontesd          #+#    #+#             */
/*   Updated: 2024/11/17 22:46:50 by dmontesd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puzzle.h"
#include "matrix.h"
#include "puzzle_constraints.h"

void	_add_number_to_map(struct s_puzzle *p, int row, int col, int number)
{
	p->row_map[flatten_index(p->size, row, number - 1)] = 1;
	p->col_map[flatten_index(p->size, col, number - 1)] = 1;
}

void	_remove_number_from_map(
	struct s_puzzle *p,
	int row,
	int col,
	int number
) {
	p->row_map[flatten_index(p->size, row, number - 1)] = 0;
	p->col_map[flatten_index(p->size, col, number - 1)] = 0;
}

int	puzzle_solve(struct s_puzzle *p, int pos);

int	_try_number(struct s_puzzle *p, int row, int col, int number)
{
	int	result;
	int	valid;

	result = 0;
	valid = number_unique_in_row_and_col(p, row, col, number)
		&& (col != p->size - 1 || row_matches_visibility(p, row))
		&& (row != p->size - 1 || col_matches_visibility(p, col));
	if (valid)
	{
		_add_number_to_map(p, row, col, number);
		result = puzzle_solve(p, flatten_index(p->size, row, col) + 1);
	}
	if (result)
		return (1);
	else if (valid)
		_remove_number_from_map(p, row, col, number);
	return (0);
}

int	puzzle_solve(struct s_puzzle *p, int pos)
{
	int	*element;
	int	row;
	int	col;

	if (pos >= p->size * p->size)
		return (1);
	element = p->grid + pos;
	*element = 1;
	row = get_row(p->size, pos);
	col = get_col(p->size, pos);
	while (*element <= p->size)
	{
		if (_try_number(p, row, col, *element))
			return (1);
		++(*element);
	}
	*element = 0;
	return (0);
}
