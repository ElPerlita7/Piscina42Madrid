/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:23:20 by abferrer          #+#    #+#             */
/*   Updated: 2024/11/18 21:18:50 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	cons_a;
	int	res_b;

	if (*b != 0)
	{
		cons_a = *a / *b;
		res_b = *a % *b;
		*a = cons_a;
		*b = res_b;
	}
	else
	{
		*a = 0;
		*b = 0;
	}
}
/*
int main()
{
	int a = 10;
	int b = 3;

	ft_ultimate_div_mod(&a, &b);
	
	printf("Conciente:%d\n", a);
	printf("Resto:%d\n", b);
	return(0);
}*/
