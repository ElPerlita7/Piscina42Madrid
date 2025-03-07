/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:49:12 by abferrer          #+#    #+#             */
/*   Updated: 2024/11/25 17:45:46 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	val;

	val = 0;
	while (val < n && s1[val] != '\0' && s2[val] != '\0' && s1[val] == s2[val])
	{
		val++;
	}
	if (val == n)
		return (0);
	return (s1[val] - s2[val]);
}
/*
#include <stdio.h>

int main()
{
	char *val1 = "Piscinero";
	char *val2 = "Pisciner";
	char *val3 = "playa";

	printf("Resultado: %d\n", ft_strncmp(val1, val2, 4));
	printf("Resultado: %d\n", ft_strncmp(val1, val3, 4));
	printf("Resultado: %d\n", ft_strncmp(val3, val1, 4));
}*/
