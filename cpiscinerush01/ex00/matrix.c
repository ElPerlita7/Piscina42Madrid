/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontesd <dmontesd@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:44:20 by dmontesd          #+#    #+#             */
/*   Updated: 2024/11/17 23:12:15 by dmontesd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	flatten_index(int cols, int row, int col)
{
	return (row * cols + col);
}

int	get_row(int cols, int position)
{
	return (position / cols);
}

int	get_col(int cols, int position)
{
	return (position % cols);
}

void	zero_array(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		arr[i] = 0;
		++i;
	}
}
