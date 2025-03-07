/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle_constraints.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontesd <dmontesd@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 19:12:37 by dmontesd          #+#    #+#             */
/*   Updated: 2024/11/17 22:44:07 by dmontesd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUZZLE_CONSTRAINTS_H
# define PUZZLE_CONSTRAINTS_H

/**
 * Checks if a row matches its visibility constraints on the left and right.
 */
int	row_matches_visibility(
		struct s_puzzle *p,
		int row
		);

/**
 * Checks if a column matches its visibility constraints of the top and bottom.
 */
int	col_matches_visibility(
		struct s_puzzle *p,
		int col
		);

/**
 * Checks if a number is unique in the row and column of the puzzle.
 */
int	number_unique_in_row_and_col(
		struct s_puzzle *p,
		int row,
		int col,
		int number
		);

#endif 