/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:42:32 by abferrer          #+#    #+#             */
/*   Updated: 2024/11/18 17:20:16 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
	else
	{
		*div = 0;
		*mod = 0;
	}
}
/*
int main()
{
	int a = 10;
	int b = 3;
	int div, mod;

	ft_div_mod(a, b, &div, &mod);

	printf("Cosciente:%d\n", div);
	printf("Resto:%d\n", mod);
	return (0);
}*/
