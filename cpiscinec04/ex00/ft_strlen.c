/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:40:16 by abferrer          #+#    #+#             */
/*   Updated: 2024/11/26 17:49:52 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
/*
#include <stdio.h>

int main()
{
	char string[] = "Listo el que lo lea";
	int result = ft_strlen(string);

	printf("La longitud es: %d\n", result);
	return (0);
}*/
