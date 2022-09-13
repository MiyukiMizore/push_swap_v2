/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_errors_start.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:59:59 by jdutschk          #+#    #+#             */
/*   Updated: 2022/09/12 15:20:18 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_errors_start(int ar, char **st)
{
	int	**stack;

	if (ar < 2)
		return (printf("Error\n"));
	if (ar == 2)
		return (ft_check_arg1(st[1]));
	else
		return (ft_check_multiple_arg(st));
}
