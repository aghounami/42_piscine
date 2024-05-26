/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 23:59:46 by aghounam          #+#    #+#             */
/*   Updated: 2023/08/17 00:03:02 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:46:36 by aghounam          #+#    #+#             */
/*   Updated: 2023/08/16 23:59:06 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	int	q;
	int	w;
	int	e;

	q = '0';
	while (q <= '7')
	{
		w = q + 1;
		while (w <= '8')
		{
			e = w + 1;
			while (e <= '9')
			{
				write (1, &q, 1);
				write (1, &w, 1);
				write (1, &e, 1);
				if (q != '7')
					write (1, ", ", 2);
				e++;
			}
			w++;
		}
		q++;
	}
}
