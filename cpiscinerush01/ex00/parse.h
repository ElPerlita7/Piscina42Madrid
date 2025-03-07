/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontesd <dmontesd@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:46:05 by dmontesd          #+#    #+#             */
/*   Updated: 2024/11/17 22:41:41 by dmontesd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Parses a string of space delimitted integers between 1 and "size" inclusive.
 * @param arg: The string of space delimitted integers.
 * @param size: The amount of integers that should be parsed. Anything over or
 * 	under this limit will cause an error. Size will determine the range of
 * 	acceptable ints. Example: A size 16 will only accepts ints in the 
 * 	range [1, 4]. Acceptable numbers for this parameter are [1, size / 4]. Only
 * 	numbers divisible by 4 are accepted.
 * @param buf_out: An int buffer of at least "size" where the parse
 * 	output is stored.
 * @return 1 or 0 representing the success or failure of the parse. If the
 * 	size is not divisible by 4, this function fails.
 */
int		parse_visibility_constraints(const char *arg, int size, int buf_out[]);

/**
 * Counts digits in a string.
 * @param str: The string containing digits to be counted.
 * @param n_digits_out: Where the amount of digits is stored.
 */
void	count_digits_in_string(const char *str, int *n_digits_out);