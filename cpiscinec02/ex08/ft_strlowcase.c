/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:29:50 by abferrer          #+#    #+#             */
/*   Updated: 2024/11/21 18:39:37 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	if (*str == '\0')
	{
		return (str);
	}
	if (*str >= 'A' && *str <= 'Z')
	{
		*str = *str + 32;
	}
	ft_strlowcase(str + 1);
	return (str);
}
/*
#include <stdio.h>

int main()
{
    char str[] = "¿TODAVIA SIGUES MIRANDO?";
    printf("%s\n", str);

	ft_strlowcase(str);
	printf("%s\n", str);
	return (0);
}*/
