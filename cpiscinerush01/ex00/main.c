/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontesd <dmontesd@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:16:41 by dmontesd          #+#    #+#             */
/*   Updated: 2024/11/17 22:30:17 by dmontesd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "puzzle.h"
#include "puzzle_solve.h"

void	print_error(void)
{
	write(2, "Error\n", 6);
}

/**
 * Solves a skyscraper puzzle dimensions between 1 and 9 inclusive.
 * Argv 1: Visibility values separated by 1 space.
 */
int	main(int argc, char *argv[])
{
	struct s_puzzle	*puzzle;

	if (argc != 2)
	{
		print_error();
		return (1);
	}
	if (!puzzle_new(argv[1], &puzzle))
	{
		print_error();
		return (1);
	}
	if (!puzzle_solve(puzzle, 0))
	{
		puzzle_destroy(puzzle);
		print_error();
		return (1);
	}
	puzzle_print(puzzle);
	puzzle_destroy(puzzle);
	return (0);
}
