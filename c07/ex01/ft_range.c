/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:13:25 by aghounam          #+#    #+#             */
/*   Updated: 2023/09/07 12:03:27 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	j;
	int	*result;

	if (min >= max && (min >= -2147483648 && max <= 2147483647))
	{
		return (NULL);
	}
	j = 0;
	result = malloc(sizeof(int) * (max - min));
	if (result == NULL)
	{
		return (NULL);
	}
	while (min < max)
	{
		result[j] = min;
		min++;
		j++;
	}
	return (result);
}
