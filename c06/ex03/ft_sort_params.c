/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:43:54 by aghounam          #+#    #+#             */
/*   Updated: 2023/09/06 11:19:43 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	compare_strings(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0' || str2[i] != '\0')
	{
		if (str1[i] == str2[i])
			i++;
		if (str1[i] < str2[i] || str1[i] > str2[i])
			return (str1[i] - str2[i]);
	}
	return (0);
}

void	swap_strings(char **str1, char **str2)
{
	char	*temp;

	temp = *str2;
	*str2 = *str1;
	*str1 = temp;
}

int	main(int total, char **args)
{
	int	i;
	int	sorted;

	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		i = 1;
		while (i < total - 1)
		{
			if (compare_strings(args[i], args[i + 1]) > 0)
			{
				swap_strings(&args[i + 1], &args[i]);
				sorted = 0;
			}
			i++;
		}
	}
	i = 1;
	while (i < total)
	{
		ft_putstr(args[i++]);
		write(1, "\n", 1);
	}
	return (0);
}
