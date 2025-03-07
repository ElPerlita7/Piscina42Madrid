/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontesd <dmontesd@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:44:46 by dmontesd          #+#    #+#             */
/*   Updated: 2024/11/17 23:11:41 by dmontesd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_H
# define MATRIX_H

/**
 * Converts a row / col based index into and flat array index.
 */
int		flatten_index(int cols, int row, int col);

int		get_row(int cols, int position);

int		get_col(int cols, int position);

void	zero_array(int *arr, int size);

void	matrix_print(int buf[], int size);

#endif