/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_thomas.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 00:04:25 by jdutschk          #+#    #+#             */
/*   Updated: 2022/09/12 17:17:02 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	algo_thomas(int *stack_a, int *stack_b, int *index_a, int *index_b)
{
	push_min_on_top(stack_a, stack_b, index_a, index_b);
	push_max_on_top(stack_a, stack_b, index_a, index_b);
	algo_hugo(stack_a, stack_b, index_a, index_b);
	p_a(stack_a, stack_b, index_a, index_b);
	r_a(stack_a, stack_b, index_a, 1);
	p_a(stack_a, stack_b, index_a, index_b);
}

int	ft_ok(int *stack_a, int *index_a)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j != index_a[0] + 1)
	{
		if (stack_a[i] > stack_a[j])
			return (1);
		i++;
		j++;
	}
	return (0);
}
