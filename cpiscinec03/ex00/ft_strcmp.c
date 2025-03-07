/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:20:44 by abferrer          #+#    #+#             */
/*   Updated: 2024/11/25 02:32:18 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	value;

	value = 0;
	while (s1[value] != '\0' && s2[value] != '\0' && s1[value] == s2[value])
	{
		value++;
	}
	return (s1[value] - s2[value]);
}
/*
#include <stdio.h>

int main()
{
	char str1[] = "Hola";
	char str2[] = "Hola";
	char str3[] = "NoMires";

	printf("es valor es: %d\n", ft_strcmp(str1, str2));
	printf("es valor es: %d\n", ft_strcmp(str1, str3));
	printf("el valor es: %d\n", ft_strcmp(str3, str1));
}*/
