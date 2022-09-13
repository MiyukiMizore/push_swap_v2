/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_julien.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 07:03:52 by jdutschk          #+#    #+#             */
/*   Updated: 2022/09/12 17:06:24 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	algo_julien(int *stack_a, int *stack_b, int *index_a, int *index_b)
{
	algo_julien1(stack_a, stack_b, index_a, index_b);
	algo_julien2(stack_a, stack_b, index_a, index_b);
	algo_julien3(stack_a, stack_b, index_a, index_b);
	algo_julien4(stack_a, stack_b, index_a, index_b);
	algo_julien5(stack_a, stack_b, index_a, index_b);
	algo_julien6(stack_a, stack_b, index_a, index_b);
	algo_julien7(stack_a, stack_b, index_a, index_b);
	algo_julien8(stack_a, stack_b, index_a, index_b);
	algo_julien9(stack_a, stack_b, index_a, index_b);
	algo_julien10(stack_a, stack_b, index_a, index_b);
	free(stack_a);
	free(stack_b);
}

void	algo_julien1(int *stack_a, int *stack_b, int *index_a, int *index_b)
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
		if (is_in_lst2(stack_a[0], cpy))
			i = p_b(stack_a, stack_b, index_a, index_b);
		if (is_in_lst2(stack_a[i], cpy))
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

void	algo_julien2(int *stack_a, int *stack_b, int *index_a, int *index_b)
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
		if (is_in_lst2(stack_a[0], cpy + 50))
			i = p_b(stack_a, stack_b, index_a, index_b);
		if (is_in_lst2(stack_a[i], cpy + 50))
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

void	algo_julien3(int *stack_a, int *stack_b, int *index_a, int *index_b)
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
		if (is_in_lst2(stack_a[0], cpy + 100))
			i = p_b(stack_a, stack_b, index_a, index_b);
		if (is_in_lst2(stack_a[i], cpy + 100))
		{
			push_him_top(stack_a, i, cpy, index_a);
			p_b(stack_a, stack_b, index_a, index_b);
			i = 0;
		}
		i++;
	}
	replace_stack(stack_a, stack_b, index_a, cpy[99]);
	while (index_b[0] != -1)
		push_max_on_top2(stack_a, stack_b, index_a, index_b);
	free(cpy);
}

void	algo_julien4(int *stack_a, int *stack_b, int *index_a, int *index_b)
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
		if (is_in_lst2(stack_a[0], cpy + 150))
			i = p_b(stack_a, stack_b, index_a, index_b);
		if (is_in_lst2(stack_a[i], cpy + 150))
		{
			push_him_top(stack_a, i, cpy, index_a);
			p_b(stack_a, stack_b, index_a, index_b);
			i = 0;
		}
		i++;
	}
	replace_stack(stack_a, stack_b, index_a, cpy[149]);
	while (index_b[0] != -1)
		push_max_on_top2(stack_a, stack_b, index_a, index_b);
	free(cpy);
}
