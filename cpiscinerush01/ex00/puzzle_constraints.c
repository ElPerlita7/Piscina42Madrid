/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle_constraints.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontesd <dmontesd@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:45:27 by dmontesd          #+#    #+#             */
/*   Updated: 2024/11/17 22:44:15 by dmontesd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puzzle.h"
#include "matrix.h"

int	_count_visible(int *begin, int step, int size)
{
	int	i;
	int	visible;
	int	max_height;

	i = 1;
	visible = 1;
	max_height = *begin;
	begin += step;
	while (i < size)
	{
		if (*begin > max_height)
		{
			++visible;
			max_height = *begin;
		}
		begin += step;
		++i;
	}
	return (visible);
}

int	row_matches_visibility(
	struct s_puzzle *p,
	int row
)
{
	int	left_visibility;
	int	right_visibility;

	left_visibility = _count_visible(p->grid + (row * p->size), 1, p->size);
	right_visibility = _count_visible(
			p->grid + (row + 1) * p->size - 1,
			-1, p->size
			);
	return (
		left_visibility == p->visible_udlr[2 * p->size + row]
		&& right_visibility == p->visible_udlr[3 * p->size + row]
	);
}

int	col_matches_visibility(
	struct s_puzzle *p,
	int col
)
{
	int	up_visibility;
	int	down_visibility;

	up_visibility = _count_visible(p->grid + col, p->size, p->size);
	down_visibility = _count_visible(
			p->grid + ((p->size - 1) * (p->size) + col),
			-p->size, p->size
			);
	return (
		up_visibility == p->visible_udlr[col]
		&& down_visibility == p->visible_udlr[p->size + col]
	);
}

int	number_unique_in_row_and_col(
	struct s_puzzle *p,
	int row,
	int col,
	int number
) {
	return (!p->row_map[flatten_index(p->size, row, number - 1)]
		&& !p->col_map[flatten_index(p->size, col, number - 1)]);
}
