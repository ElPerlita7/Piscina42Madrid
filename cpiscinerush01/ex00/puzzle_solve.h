/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle_solve.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontesd <dmontesd@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 22:01:17 by dmontesd          #+#    #+#             */
/*   Updated: 2024/11/17 22:46:43 by dmontesd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUZZLE_SOLVE_H
# define PUZZLE_SOLVE_H

/**
 * Recursively find the solution to the skyscraper puzzle by backtracking
 * 	iterations based on row and column uniqueness conditions and visibility
 * 	conditions.
 */
int	puzzle_solve(struct s_puzzle *p, int pos);

#endif
