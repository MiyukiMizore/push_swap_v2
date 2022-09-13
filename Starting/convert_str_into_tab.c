/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_str_into_tab.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:32:37 by jdutschk          #+#    #+#             */
/*   Updated: 2022/09/12 18:30:52 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	convert_str_into_tab(char *str, int *lst)
{
	char	**tableau;
	int		i;

	i = 0;
	tableau = ft_split(str, ' ');
	while (tableau[i])
	{
		if (compare_to_int(tableau[i]))
		{
			ft_free_tab(tableau);
			return (1);
		}
		lst[i] = ft_atoi(tableau[i]);
		i++;
	}
	ft_free_tab(tableau);
	return (0);
}
