/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:05:53 by abferrer          #+#    #+#             */
/*   Updated: 2024/11/20 23:16:40 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*tmp;

	tmp = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (tmp);
}

/*
#include <stdio.h>
	int main()
	{
		char src[] = "No mires tanto";
		char dest[20];

		ft_strcpy(dest, src);
		printf("Cadena: %s\n", dest);
		return (0);
}*/
