/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_julien_3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 04:01:55 by jdutschk          #+#    #+#             */
/*   Updated: 2022/09/12 17:07:10 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	algo_julien9(int *stack_a, int *stack_b, int *index_a, int *index_b)
{
	int	i;
	int	*cpy;

	cpy = ft_calloc(sizeof(int), index_a[0] + 10);
	duplicate(cpy, stack_a, index_a);
	ft_sort_integer_table(cpy, index_a[0]);
	ft_rotate(cpy, index_a);
	i = 0;
	while (index_a[0] != 449)
	{
		if (is_in_lst2(stack_a[0], cpy + 400))
			i = p_b(stack_a, stack_b, index_a, index_b);
		if (is_in_lst2(stack_a[i], cpy + 400))
		{
			push_him_top(stack_a, i, cpy, index_a);
			p_b(stack_a, stack_b, index_a, index_b);
			i = 0;
		}
		i++;
	}
	replace_stack(stack_a, stack_b, index_a, cpy[399]);
	while (index_b[0] != -1)
		push_max_on_top2(stack_a, stack_b, index_a, index_b);
	free(cpy);
}

void	algo_julien10(int *stack_a, int *stack_b, int *index_a, int *index_b)
{
	int	i;
	int	*cpy;

	cpy = ft_calloc(sizeof(int), index_a[0] + 10);
	duplicate(cpy, stack_a, index_a);
	ft_sort_integer_table(cpy, index_a[0]);
	ft_rotate(cpy, index_a);
	i = 0;
	while (index_a[0] != 449)
	{
		if (is_in_lst2(stack_a[0], cpy + 450))
			i = p_b(stack_a, stack_b, index_a, index_b);
		if (is_in_lst2(stack_a[i], cpy + 450))
		{
			push_him_top(stack_a, i, cpy, index_a);
			p_b(stack_a, stack_b, index_a, index_b);
			i = 0;
		}
		i++;
	}
	replace_stack(stack_a, stack_b, index_a, cpy[449]);
	while (index_b[0] != -1)
		push_max_on_top2(stack_a, stack_b, index_a, index_b);
	free(cpy);
}
