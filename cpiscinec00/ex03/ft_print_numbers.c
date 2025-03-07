/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 21:11:01 by abferrer          #+#    #+#             */
/*   Updated: 2024/11/12 21:54:05 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	digit;

	digit = '0';
	while (digit <= '9')
	{
		write(1, &digit, 1);
		digit++;
	}
}
/*
int	main(void)

{
	ft_print_numbers();
	return (0);
}*/
