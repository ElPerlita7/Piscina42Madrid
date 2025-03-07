/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 21:58:20 by abferrer          #+#    #+#             */
/*   Updated: 2024/11/12 23:03:53 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	cp;
	char	cn;

	cn = 'N';
	cp = 'P';
	if (n < 0)
	{
		write (1, &cn, 1);
	}
	else
	{
		write (1, &cp, 1);
	}
}
/*
int	main(void)
{
	ft_is_negative(100);
	ft_is_negative(-100);
	ft_is_negative(0);
	ft_is_negative(-50);
	return (0);
}*/
