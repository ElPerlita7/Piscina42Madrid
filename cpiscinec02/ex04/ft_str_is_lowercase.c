/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:34:42 by abferrer          #+#    #+#             */
/*   Updated: 2024/11/21 13:37:09 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	if (str[0] == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main()
{
	char *str1 = "porque miras";
	printf("'%s': %d\n", str1, ft_str_is_lowercase(str1));

	char *str2 = "SiGues Mirando2345@";
    printf("'%s': %d\n", str2, ft_str_is_lowercase(str2));
	return(0);
}*/
