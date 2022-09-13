/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:55:10 by jdutschk          #+#    #+#             */
/*   Updated: 2022/09/12 17:43:07 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "Libft/libft.h"
# include "limits.h"

//------algo_julien-------//
void	algo_julien(int *stack_a, int *stack_b, int *index_a, int *index_b);
void	algo_julien1(int *stack_a, int *stack_b, int *index_a, int *index_b);
void	algo_julien2(int *stack_a, int *stack_b, int *index_a, int *index_b);
void	algo_julien3(int *stack_a, int *stack_b, int *index_a, int *index_b);
void	algo_julien4(int *stack_a, int *stack_b, int *index_a, int *index_b);
void	algo_julien5(int *stack_a, int *stack_b, int *index_a, int *index_b);
void	algo_julien6(int *stack_a, int *stack_b, int *index_a, int *index_b);
void	algo_julien7(int *stack_a, int *stack_b, int *index_a, int *index_b);
void	algo_julien8(int *stack_a, int *stack_b, int *index_a, int *index_b);
void	algo_julien9(int *stack_a, int *stack_b, int *index_a, int *index_b);
void	algo_julien10(int *stack_a, int *stack_b, int *index_a, int *index_b);
int		is_in_lst2(int stack_0, int *stack_cpy);

//-----algo_loic------//
void	algo_loic(int *stack_a, int *stack_b, int *index_a, int *index_b);
void	algo_loic_pt1(int *stack_a, int *stack_b, int *index_a, int *index_b);
void	algo_loic_pt2(int *stack_a, int *stack_b, int *index_a, int *index_b);
void	algo_loic_pt3(int *stack_a, int *stack_b, int *index_a, int *index_b);
void	algo_loic_pt4(int *stack_a, int *stack_b, int *index_a, int *index_b);
void	replace_stack(int *stack_a, int *stack_b, int *index_a, int nbr);

//---------------algo---------------//
void	algo_hugo(int *stack_a, int *stack_b, int *index_a, int *index_b);
void	algo_thomas(int *stack_a, int *stack_b, int *index_a, int *index_b);
void	algo_other(int *stack_a, int *stack_b, int *index_a, int *index_b);

//---------tools-------//
void	print_stack(int *stack, int *j, char *name_stack);
void	ft_rotate(int *tab, int *index);
void	ft_uptade_push_list(int *tab, int *index);
int		find_max_index(int *tab, int *index);
int		find_min_index(int *tab, int *index);
void	push_max_on_top(int *stack_a, int *stack_b, int *index_a, int *index_b);
void	push_min_on_top(int *stack_a, int *stack_b, int *index_a, int *index_b);
void	push_mintopv2(int *stack_a, int *stack_b, int *index_a, int *index_b);
int		find_min(int *tab, int *index);

//--------------error-------------//
int		ft_check_errors_start(int ar, char **st);
int		ft_check_arg1(char *str);
int		ft_check_multiple_arg(char **lst);
int		verif_double(int *t, int nbr_case);
int		ft_check_argv2(char *str);
int		check_argv3(char *s);
int		compare_to_int(char *str);
int		ft_check_arg1v2(char *str);
int		ft_check_arg1v3(char *str);

//-----------init-------------------//
int		*init_list(int ac, char **argv);
int		convert_lst_into_tab(char **lst, int *tab);
int		convert_str_into_tab(char *str, int *lst);
int		define_cmpt(char **str, int ac);
int		make_int_tab(int *tab, char **argv, int argc);
int		nbr_cmpt_lst_mutiple(char **argv);
int		nbr_cmpt_lst(char *str);
int		is_in_lst(int stack_0, int *stack_cpy);

//---------------start algo---------------//
void	choose_algo(int *stack_a, int *stack_b, int *index_a, int *index_b);
void	push_him_top(int *stack_a, int local, int *cpy, int *index_a);
void	push_max_on_top2(int *stack_a, int *stack_b, int *index_a,
			int *index_b);
void	starting(int *stack_a, int *stack_b, int index_a, int index_b);
int		ft_finish(int *stack_a, int *index_a, int *index_b);
int		ft_nbr_op_index(int *stack_a, int *index_a);
int		find_min(int *tab, int *index);
int		find_max(int *tab, int *index);
int		ft_ok(int *stack_a, int *index_a);

//---------------instructions---------------//
void	duplicate(int *new, int *actual, int *index);
void	p_a(int *stack_a, int *stack_b, int *imax_a, int *imax_b);
int		p_b(int *stack_a, int *stack_b, int *imax_a, int *imax_b);
void	r_b(int *stack_a, int *stack_b, int indicator, int *imax_b);
void	r_a(int *stack_a, int *stack_b, int *imax_a, int indicator);
void	r_r(int *stack_a, int *stack_b, int *imax_a, int *imax_b);
void	r_ra(int *stack_a, int *stack_b, int *imax_a, int indicator);
void	r_rb(int *stack_a, int *stack_b, int indicator, int *imax_b);
void	r_rr(int *stack_a, int *stack_b, int *imax_a, int *imax_b);
void	s_a(int *stack_a, int *stack_b, int *imax_a, int *imax_b);
void	s_b(int *stack_a, int *stack_b, int *imax_a, int *imax_b);
void	s_s(int *stack_a, int *stack_b, int *imax_a, int *imax_b);
#endif