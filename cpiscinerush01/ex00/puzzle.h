/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontesd <dmontesd@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:16:41 by dmontesd          #+#    #+#             */
/*   Updated: 2024/11/17 22:52:36 by dmontesd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUZZLE_H
# define PUZZLE_H

/**
 * Holds all the state to solve a puzzle.
 * grid: A dynamically allocated array holding the values of the skyscrapers.
 * visible_udlr: Dynamically allocated array holding visibility constraints.
 * size: The dimension of the square puzzle. Total elements are size * size.
 * row_map and col_map: Boolean maps for each row and column to check if an
 * 	element is in them in O(1) complexity.
 */
struct	s_puzzle
{
	int	*grid;
	int	*visible_udlr;
	int	size;
	int	*row_map;
	int	*col_map;
};

/**
 * Dynamically allocates and inits a puzzle by parsing rows, cols, and 
 * 	visibility constraints.
 * @param visibility_constraints: A string of space delimitted digits, 
 *  representing the visibility constraints for up, down, left and right 
 *  views.
 * @param out: Stores the dynamically allocated struct in this pointer.
 * @return: True on success and false on error. Possible errors are malloc
 *  errors and parse errors.
 */
int		puzzle_new(
			const char *visibility_constraints,
			struct s_puzzle **out
			);

/**
 * Frees the puzzle struct and its contents.
 */
void	puzzle_destroy(struct s_puzzle *p);

/**
 * Prints a puzzle via stdout using write, printing each row followed by a
 * newline and separating each value with a space.
 */
void	puzzle_print(struct s_puzzle *p);

#endif