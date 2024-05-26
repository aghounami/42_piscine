/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:48:30 by aghounam          #+#    #+#             */
/*   Updated: 2023/09/07 12:05:02 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;
	int	size;

	i = 0;
	size = 0;
	if (min >= max && (min >= -2147483648 && max <= 2147483647))
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
	{
		return (0);
	}
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	*range = array;
	return (i);
}
