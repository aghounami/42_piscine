/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:25:26 by aghounam          #+#    #+#             */
/*   Updated: 2023/08/29 13:16:25 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	b;

	b = argc - 1;
	if (argc > 1)
	{
		while (b > 0)
		{
			i = 0;
			while (argv[b][i] != '\0')
			{
				ft_putchar(argv[b][i]);
				i++;
			}
			ft_putchar('\n');
			b--;
		}
	}
	return (0);
}
