/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:04:23 by aghounam          #+#    #+#             */
/*   Updated: 2023/08/29 23:56:40 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				b;

	b = 0;
	while (dest[b] != '\0')
	{
		b++;
	}
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		dest[i + b] = src[i];
		i++;
	}
	dest[i + b] = '\0';
	return (dest);
}
