/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:24:50 by abferrer          #+#    #+#             */
/*   Updated: 2024/11/20 17:20:52 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	if (str[0] == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	char *str1 = "porque miras123";
	printf("'%s': %d\n", str1, ft_str_is_uppercase(str1));

	char *str2 = "SIGUESMIRANDO";
	printf("'%s': %d\n", str2, ft_str_is_uppercase(str2));
	return(0);
}*/
