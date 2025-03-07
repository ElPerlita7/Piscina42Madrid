/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 22:00:12 by abferrer          #+#    #+#             */
/*   Updated: 2024/11/27 22:58:06 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

int	main(int argc, char *argv[])
{
	if (argc > 0)
	{
		write(1, argv[0], ft_strlen(argv[0]));
		write(1, "\n", 1);
	}
	return (0);
}
