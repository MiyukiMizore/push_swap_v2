/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_loic.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 04:21:09 by jdutschk          #+#    #+#             */
/*   Updated: 2022/09/12 17:15:34 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	algo_loic(int *stack_a, int *stack_b, int *index_a, int *index_b)
{
	algo_loic_pt1(stack_a, stack_b, index_a, index_b);
	algo_loic_pt2(stack_a, stack_b, index_a, index_b);
	algo_loic_pt3(stack_a, stack_b, index_a, index_b);
	algo_loic_pt4(stack_a, stack_b, index_a, index_b);
	free(stack_a);
	free(stack_b);
}

void	algo_loic_pt1(int *stack_a, int *stack_b, int *index_a, int *index_b)
{
	int	i;
	int	*cpy;

	cpy = ft_calloc(sizeof(int), index_a[0] + 10);
	duplicate(cpy, stack_a, index_a);
	ft_sort_integer_table(cpy, index_a[0]);
	ft_rotate(cpy, index_a);
	i = 0;
	while (index_a[0] != 74)
	{
		if (is_in_lst(stack_a[0], cpy))
			i = p_b(stack_a, stack_b, index_a, index_b);
		if (is_in_lst(stack_a[i], cpy))
		{
			push_him_top(stack_a, i, cpy, index_a);
			p_b(stack_a, stack_b, index_a, index_b);
			i = 0;
		}
		i++;
	}
	while (index_b[0] != -1)
		push_max_on_top2(stack_a, stack_b, index_a, index_b);
	free(cpy);
}

void	algo_loic_pt2(int *stack_a, int *stack_b, int *index_a, int *index_b)
{
	int	i;
	int	*cpy;

	cpy = ft_calloc(sizeof(int), index_a[0] + 10);
	duplicate(cpy, stack_a, index_a);
	ft_sort_integer_table(cpy, index_a[0]);
	ft_rotate(cpy, index_a);
	i = 0;
	while (index_a[0] != 74)
	{
		if (is_in_lst(stack_a[0], cpy + 25))
			i = p_b(stack_a, stack_b, index_a, index_b);
		if (is_in_lst(stack_a[i], cpy + 25))
		{
			push_him_top(stack_a, i, cpy, index_a);
			p_b(stack_a, stack_b, index_a, index_b);
			i = 0;
		}
		i++;
	}
	replace_stack(stack_a, stack_b, index_a, cpy[24]);
	while (index_b[0] != -1)
		push_max_on_top2(stack_a, stack_b, index_a, index_b);
	free(cpy);
}

void	algo_loic_pt3(int *stack_a, int *stack_b, int *index_a, int *index_b)
{
	int	i;
	int	*cpy;

	cpy = ft_calloc(sizeof(int), index_a[0] + 10);
	duplicate(cpy, stack_a, index_a);
	ft_sort_integer_table(cpy, index_a[0]);
	ft_rotate(cpy, index_a);
	i = 0;
	while (index_a[0] != 74)
	{
		if (is_in_lst(stack_a[0], cpy + 50))
			i = p_b(stack_a, stack_b, index_a, index_b);
		if (is_in_lst(stack_a[i], cpy + 50))
		{
			push_him_top(stack_a, i, cpy, index_a);
			p_b(stack_a, stack_b, index_a, index_b);
			i = 0;
		}
		i++;
	}
	replace_stack(stack_a, stack_b, index_a, cpy[49]);
	while (index_b[0] != -1)
		push_max_on_top2(stack_a, stack_b, index_a, index_b);
	free(cpy);
}

void	algo_loic_pt4(int *stack_a, int *stack_b, int *index_a, int *index_b)
{
	int	i;
	int	*cpy;

	cpy = ft_calloc(sizeof(int), index_a[0] + 10);
	duplicate(cpy, stack_a, index_a);
	ft_sort_integer_table(cpy, index_a[0]);
	ft_rotate(cpy, index_a);
	i = 0;
	while (index_a[0] != 74)
	{
		if (is_in_lst(stack_a[0], cpy + 75))
			i = p_b(stack_a, stack_b, index_a, index_b);
		if (is_in_lst(stack_a[i], cpy + 75))
		{
			push_him_top(stack_a, i, cpy, index_a);
			p_b(stack_a, stack_b, index_a, index_b);
			i = 0;
		}
		i++;
	}
	replace_stack(stack_a, stack_b, index_a, cpy[74]);
	while (index_b[0] != -1)
		push_max_on_top2(stack_a, stack_b, index_a, index_b);
	free(cpy);
}
