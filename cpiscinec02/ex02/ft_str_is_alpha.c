/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:59:00 by abferrer          #+#    #+#             */
/*   Updated: 2024/11/19 20:30:30 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	if (str[0] == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123)))
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
	char *str1 = "Patimicola";
	printf("'%s' : %d\n", str1, ft_str_is_alpha(str1));

	char *str2 = "Patimicola123@";
	printf("'%s' : %d\n", str2, ft_str_is_alpha(str2));
}*/
