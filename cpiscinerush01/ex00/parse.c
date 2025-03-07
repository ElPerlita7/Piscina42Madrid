/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontesd <dmontesd@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:45:42 by dmontesd          #+#    #+#             */
/*   Updated: 2024/11/17 22:39:01 by dmontesd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	count_digits_in_string(const char *arg, int *size_out)
{
	int	counter;

	counter = 0;
	while (*arg != '\0')
	{
		if (*arg >= '1' && *arg <= '9')
			++counter;
		++arg;
	}
	*size_out = counter / 4;
}

int	parse_visibility_constraints(const char *arg, int size, int buf_out[])
{
	int	counter;

	if (size % 4 != 0)
		return (0);
	counter = 0;
	while (counter < size)
	{
		if (counter != 0 && *arg != ' ')
			return (0);
		if (counter != 0)
			++arg;
		if (!(*arg >= '1' && *arg <= size / 4 + '0'))
			return (0);
		buf_out[counter] = *arg - '0';
		++arg;
		++counter;
	}
	if (*arg != '\0')
		return (0);
	return (1);
}
