/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontesd <dmontesd@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:16:41 by dmontesd          #+#    #+#             */
/*   Updated: 2024/11/17 22:58:21 by dmontesd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "puzzle.h"
#include "puzzle_constraints.h"
#include "matrix.h"
#include "parse.h"

int	_puzzle_contents_alloc( struct s_puzzle *p)
{
	p->visible_udlr = malloc(sizeof(int) * p->size * 4);
	if (p->visible_udlr == 0)
		return (0);
	p->grid = malloc(sizeof(int) * p->size * p->size);
	if (p->grid == 0)
	{
		free(p->visible_udlr);
		return (0);
	}
	p->col_map = malloc(sizeof(int) * p->size * p->size);
	if (p->col_map == 0)
	{
		free(p->grid);
		free(p->visible_udlr);
		return (0);
	}
	p->row_map = malloc(sizeof(int) * p->size * p->size);
	if (p->row_map == 0)
	{
		free(p->col_map);
		free(p->grid);
		free(p->visible_udlr);
		return (0);
	}
	return (1);
}

int	_puzzle_init(
	struct s_puzzle *p,
	const char *visibility_constraints
) {
	int	result;

	count_digits_in_string(visibility_constraints, &p->size);
	if (!_puzzle_contents_alloc(p))
		return (0);
	zero_array(p->grid, p->size * p->size);
	zero_array(p->col_map, p->size * p->size);
	zero_array(p->row_map, p->size * p->size);
	result = parse_visibility_constraints(visibility_constraints,
			p->size * 4,
			p->visible_udlr
			);
	if (!result)
	{
		free(p->col_map);
		free(p->row_map);
		free(p->visible_udlr);
		free(p->grid);
		return (0);
	}
	return (1);
}

int	puzzle_new(
	const char *visibility_constraints,
	struct s_puzzle **out
)
{
	*out = malloc(sizeof(struct s_puzzle));
	if (*out == 0)
		return (0);
	if (!_puzzle_init(*out, visibility_constraints))
	{
		free(*out);
		return (0);
	}
	return (1);
}

void	puzzle_destroy(struct s_puzzle *p)
{
	free(p->col_map);
	free(p->row_map);
	free(p->visible_udlr);
	free(p->grid);
	free(p);
}

void	puzzle_print(struct s_puzzle *p)
{
	int		row;
	int		col;
	char	c;

	row = 0;
	while (row < p->size)
	{
		if (row != 0)
			write(1, "\n", 1);
		col = 0;
		while (col < p->size)
		{
			if (col != 0)
				write(1, " ", 1);
			c = p->grid[row * p->size + col] + '0';
			write(1, &c, 1);
			++col;
		}
		++row;
	}
	write(1, "\n", 1);
}
