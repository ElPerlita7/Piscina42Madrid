/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:23:41 by abferrer          #+#    #+#             */
/*   Updated: 2024/11/18 20:55:31 by abferrer         ###   ########.fr       */
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

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		ft_swap(&tab[i], &tab[j]);
		i++;
		j--;
	}
}
/*
int main(){
	int arr[] = {5, 2, 9, 1, 5, 6};
	int size = sizeof(arr) / sizeof(arr[0]);

	ft_sort_int_tab(arr, size);

	printf("Array ordenado: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
		printf("\n");
		return (0);
}*/
