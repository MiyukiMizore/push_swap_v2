/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_multiple_arg.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:05:02 by jdutschk          #+#    #+#             */
/*   Updated: 2022/09/12 15:22:16 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_multiple_arg(char **lst)
{
	int	i;

	i = 1;
	while (lst[i])
	{
		if (ft_check_argv2(lst[i]))
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_argv2(char *str)
{
	int	i;
	int	space;

	space = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9' )
		{
			if (str[i] != ' ')
			{
				if (str[i] != '-')
					return (ft_printf("Error\n"));
			}
		}
		if (str[i] >= '0' && str[i] <= '9')
			space = 0;
		i++;
	}
	if (space)
		return (ft_printf("Error\n"));
	return (check_argv3(str));
}

int	check_argv3(char *s)
{
	int	i;

	i = 0;
	while (s[i] == ' ')
		i++;
	if (s[i] == '-')
		i++;
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (ft_printf("Error\n"));
		i++;
		if (s[i] == ' ')
		{
			while (s[i])
			{
				if (s[i] != ' ')
					return (ft_printf("Error\n"));
				i++;
			}
		}
	}
	return (0);
}
