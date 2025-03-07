/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:30:13 by abferrer          #+#    #+#             */
/*   Updated: 2024/11/20 20:40:16 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	if (*str == '\0')
	{
		return (str);
	}
	if (*str >= 'a' && *str <= 'z')
	{
		*str = *str - 32;
	}
	ft_strupcase(str + 1);
	return (str);
}
/*
#include <stdio.h>

int main()
{
	char str[] = "¿todavia sigues mirando?";
	printf("%s\n", str);

	ft_strupcase(str);
	printf("%s\n", str);
	return (0);
}*/
