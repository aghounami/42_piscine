/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 23:04:24 by aghounam          #+#    #+#             */
/*   Updated: 2023/09/07 12:02:22 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

char	*ft_strdup(char *src)
{
	int		i;
	char	*cp;

	i = 0;
	cp = malloc(sizeof(char) * str_len(src));
	if (cp == NULL)
	{
		return (NULL);
	}
	while (src[i])
	{
		*(cp + i) = src[i];
		i++;
	}
	cp[i] = '\0';
	return (cp);
}
