/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg1v2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:23:11 by jdutschk          #+#    #+#             */
/*   Updated: 2022/09/12 18:29:58 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_arg1v2(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		if (str[i] == ' ')
		{
			i++;
		}
		if (str[i] == '-')
		{
			if (str[i + 1] < '0' || str[i + 1] > '9')
				return (ft_printf("Error\n"));
			i++;
		}
	}
	return (ft_check_arg1v3(str));
}

int	ft_check_arg1v3(char *str)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tab = ft_split(str, ' ');
	while (tab[i])
	{
		while (tab[i][j])
		{
			if (tab[i][j] == '-' && j != 0)
			{
				ft_free_tab(tab);
				return (ft_printf("Error\n"));
			}
			j++;
		}
		i++;
		j = 0;
	}
	ft_free_tab(tab);
	return (0);
}
