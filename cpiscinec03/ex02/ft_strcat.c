/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:40:02 by abferrer          #+#    #+#             */
/*   Updated: 2024/11/25 18:53:46 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*dest_first;

	dest_first = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_first);
}
/*
#include <stdio.h>

int main()
{
	char dest[100] = "KLK,  ";
	char src[] = "Patata!";

	ft_strcat(dest, src);
	printf("%s\n", dest);
	return (0);
}*/
