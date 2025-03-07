/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crirodr2 <crirodr2@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:49:05 by crirodr2          #+#    #+#             */
/*   Updated: 2024/11/13 14:54:15 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	char_printer(int max_x, int max_y, int curr_x, int curr_y)
{
	int	is_1st_line;
	int	is_1st_column;
	int	is_last_line;
	int	is_last_column;

	is_1st_line = (curr_y == 1);
	is_1st_column = (curr_x == 1);
	is_last_line = (curr_y == max_y);
	is_last_column = (curr_x == max_x);
	if (is_1st_column && is_1st_line)
		ft_putchar('/');
	else if ((is_last_column && is_1st_line) || (is_1st_column && is_last_line))
		ft_putchar('\\');
	else if (is_last_column && is_last_line)
		ft_putchar('/');
	else if (is_1st_column || is_last_column || is_1st_line || is_last_line)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

int	rush(int x, int y)
{
	int	x_curr;
	int	y_curr;

	if (x <= 0 || y <= 0)
	{
		write(2, "Rush error: The values provided must be positive.", 49);
		return (1);
	}
	y_curr = 1;
	while (y_curr <= y)
	{
		x_curr = 1;
		while (x_curr <= x)
		{
			/*char_printer(x, y, x_curr, y_curr);*/
			ft_putchar('0' + x_curr);
			x_curr++;
		}
		ft_putchar('\n');
		y_curr++;
	}
	return (0);
}
