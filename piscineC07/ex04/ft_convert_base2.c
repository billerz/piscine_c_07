/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatthan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:46:41 by npatthan          #+#    #+#             */
/*   Updated: 2021/11/08 10:46:43 by npatthan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdbool.h>

int	ft_str_length(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

bool	is_space(char c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r' || c == ' ');
}

bool	is_base_valid(char *str)
{
	char	*curr;
	int		index;
	int		jndex;

	curr = str;
	if (str == 0 || ft_str_length(str) <= 1)
		return (false);
	while (*curr)
	{
		if (is_space(*curr) || *curr == '+' || *curr == '-')
			return (false);
		curr++;
	}
	index = 0;
	while (index < curr - str)
	{
		jndex = index + 1;
		while (jndex < curr - str)
			if (str[index] == str[jndex++])
				return (false);
		index++;
	}
	return (true);
}

int	compute_number_length(unsigned int number, int radix, bool negative)
{
	unsigned int	length;

	if (negative)
	{
		length = 1;
	}
	else
	{
		length = 0;
	}
	while (true)
	{
		length++;
		if (number / radix == 0)
			break ;
		number /= radix;
	}
	return (length);
}
