/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:32:25 by aghounam          #+#    #+#             */
/*   Updated: 2023/08/29 18:58:06 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (result);
}
