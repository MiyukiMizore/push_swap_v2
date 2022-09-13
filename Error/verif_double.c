/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:54:45 by jdutschk          #+#    #+#             */
/*   Updated: 2022/09/12 15:25:00 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	verif_double(int *t, int nbr_case)
{
	int	stop;
	int	i ;
	int	j;
	int	n;

	stop = nbr_case;
	i = 1;
	j = 0;
	n = 0;
	while (j != stop)
	{
		if (t[i] == t[j])
		{
			free(t);
			return (ft_printf("Error\n"));
		}
		if (i == stop)
		{
			j++;
			i = j;
		}
		i++;
	}
	return (0);
}
