/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:19:51 by abferrer          #+#    #+#             */
/*   Updated: 2024/11/27 02:09:04 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_atoi(char *str)
{
	int	nbr;
	int	is_negative;
	int	i;

	nbr = 0;
	is_negative = false;
	i = 0;
	while (str[i] == ' ')
		++i;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			is_negative = !is_negative;
		}
		++i;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		++i;
	}
	if (is_negative)
		nbr = -nbr;
	return (nbr);
}
/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_atoi("--+--+1234abcd567"));
	printf("%d\n", ft_atoi("  42"));
	printf("%d\n", ft_atoi("   -42"));
	printf("%d\n", ft_atoi("  0005677"));
	printf("%d\n", ft_atoi(" d 0005677"));
	return (0);
}*/
