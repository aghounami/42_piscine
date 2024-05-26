/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 18:12:33 by aghounam          #+#    #+#             */
/*   Updated: 2023/09/07 12:00:19 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	get_size(char **strs, char *sep, int size)
{
	int	i;
	int	ln;

	i = 0;
	ln = 0;
	while (i < size)
	{
		ln = ln + str_len(strs[i]);
		i++;
	}
	ln = ln + (str_len(sep) * size - 1) + 1;
	return (ln);
}

char	*str_cat(char *dest, char *src)
{
	int	i;
	int	j;

	if (src[0] == '\0')
	{
		return (dest);
	}
	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*result;

	i = 0;
	if (size == 0)
	{
		result = malloc(sizeof(char));
		*result = '\0';
		return (result);
	}
	result = malloc(sizeof(char) * get_size(strs, sep, size));
	if (!result)
		return (NULL);
	*result = '\0';
	while (i < size)
	{
		str_cat(result, strs[i]);
		if (i < size - 1)
		{
			str_cat(result, sep);
		}
		i++;
	}
	return (result);
}
