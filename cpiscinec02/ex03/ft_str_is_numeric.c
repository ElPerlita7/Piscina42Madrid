/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:42:01 by abferrer          #+#    #+#             */
/*   Updated: 2024/11/21 16:53:34 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	if (str[0] == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
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
    char *str1 = "porque miras";
    printf("'%s': %d\n", str1, ft_str_is_numeric(str1));

    char *str2 = "2345";
    printf("'%s': %d\n", str2, ft_str_is_numeric(str2));
    return(0);
}*/
