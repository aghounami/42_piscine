/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:01:30 by aghounam          #+#    #+#             */
/*   Updated: 2023/08/29 19:31:08 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	resultat;

	resultat = 1;
	if (power < 0)
	{
		return (0);
	}
	while (power > 0)
	{
		resultat *= nb;
		power--;
	}
	return (resultat);
}
