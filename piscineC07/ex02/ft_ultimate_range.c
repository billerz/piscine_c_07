/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatthan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 09:40:34 by npatthan          #+#    #+#             */
/*   Updated: 2021/11/08 09:46:47 by npatthan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	bound;
	int	index;
	int	*buffer;

	if (min >= max)
	{
		*range = 0;
		return(0);
	}
	bound = max - min - 1;
	buffer = malloc(bound * sizeof(int));
	if (buffer == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	index = 0;
	while (index <= bound)
	{
		buffer[index] = min + index;
		index++;
	}
	return (bound + 1);
}
