/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 19:54:10 by abferrer          #+#    #+#             */
/*   Updated: 2024/11/27 01:54:40 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	digit;

	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	digit = nb % 10 + '0';
	write(1, &digit, 1);
}
/*
#include <limits.h>
int main()
{
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(-123);
	write(1, "\n", 1);
	ft_putnbr(INT_MIN);
	write(1, "\n", 1);
	ft_putnbr(INT_MAX);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}*/
