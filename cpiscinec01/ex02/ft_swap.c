/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:40:22 by abferrer          #+#    #+#             */
/*   Updated: 2024/11/18 16:22:42 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	n;

	n = *a;
	*a = *b;
	*b = n;
}
/*
int main()
{
	int x = 5, y = 10;

	printf("Antes: x= %d, y = %d\n", x, y);

	ft_swap(&x, &y);
	
	printf("Despues: x = %d, y = %d\n", x, y);
	return (0);
}*/
