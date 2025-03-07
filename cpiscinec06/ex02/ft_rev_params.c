/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 00:20:35 by abferrer          #+#    #+#             */
/*   Updated: 2024/11/28 00:34:11 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	len;

	i = argc -1;
	while (i > 0)
	{
		len = ft_strlen(argv[i]);
		write(1, argv[i], len);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
