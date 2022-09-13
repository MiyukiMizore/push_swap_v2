/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:01:00 by jdutschk          #+#    #+#             */
/*   Updated: 2022/09/12 15:20:46 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_arg1(char *str)
{
	int	i;
	int	space;

	space = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			if (str[i] != '-' && str[i] != ' ')
				return (ft_printf("Error\n"));
		}
		if (str[i] >= '0' && str[i] <= '9')
			space = 0;
		i++;
	}
	if (space)
		return (ft_printf("Error\n"));
	return (ft_check_arg1v2(str));
}
