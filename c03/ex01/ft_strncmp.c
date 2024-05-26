/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:30:18 by aghounam          #+#    #+#             */
/*   Updated: 2023/08/28 17:11:30 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	e;

	e = 0;
	while (e < n && (s1[e] != '\0' || s2[e] != '\0'))
	{
		if (s1[e] < s2[e])
		{
			return (-1);
		}
		else if (s1[e] > s2[e])
		{
			return (1);
		}
		e++;
	}
	return (0);
}
