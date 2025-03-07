/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:33:47 by abferrer          #+#    #+#             */
/*   Updated: 2024/11/17 15:09:04 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	digit_d;
	char	digit_u;
	char	digit_c;
	char	com;
	char	space;

	com = ',';
	digit_d = '1';
	digit_u = '2';
	digit_c = '3';
	space = ' ';

	
	while (digit_u <= '9')
	{		
		write(1, &digit_d, 1);
		write(1, &digit_u, 1);
		write(1, &digit_c, 1);
		if (digit_u < '9')
		{
			write(1, &com, 1);
			write(1, &space, 1);
		}
		digit_u++;
			digit_c++;
				digit_d++;
	}
}

int main (void)
{
 	ft_print_comb();
	return (0);
}
