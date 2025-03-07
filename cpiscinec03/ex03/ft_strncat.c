/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:06:32 by abferrer          #+#    #+#             */
/*   Updated: 2024/11/25 19:26:33 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*dest_first;
	unsigned int	i;

	i = 0;
	dest_first = dest;
	if (nb == 0)
	{
		return (dest_first);
	}
	while (*dest)
	{
		dest++;
	}
	while (i < nb && *src)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (dest_first);
}
/*
#include <stdio.h>

int main()
{
	char dest[100] = "Pasame el ";
	char src[] = "canal";

	ft_strncat(dest, src, 3);
	printf("%s\n", dest);
	return (0);
}*/
