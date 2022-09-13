# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/31 11:24:32 by jdutschk          #+#    #+#              #
#    Updated: 2022/09/12 17:13:34 by mfusil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

TRASH = object

LIBFT = Libft/libft.a

SRC_MAIN = Main/main.c

SRC_TOOLS = Tools/print_stack.c\
			Tools/ft_rotate.c\
			Tools/find_min+max.c\
			Tools/find_min_index+max.c\
			Tools/raccourci.c

SRC_START = Algo/starting+start_algo.c\
			 Algo/is_in_lst2.c\
			 Algo/algo_julien_2.c\
			 Algo/algo_julien_3.c\
			 Algo/algo_julien.c\
			 Algo/replace_stack.c\
			 Algo/algo_loic.c\
			 Algo/choose_algo.c\
			 Algo/ft_finish.c\
			 Algo/algo_hugo.c\
			 Algo/algo_thomas.c\
			 Algo/nbr_op_index.c

SRC_ALGO = Instructions/duplicate.c\
		   Instructions/p_a.c\
		   Instructions/p_b.c\
		   Instructions/r_a.c\
		   Instructions/r_b.c\
		   Instructions/r_r.c\
		   Instructions/r_ra.c\
		   Instructions/r_rb.c\
		   Instructions/r_rr.c\
		   Instructions/s_a.c\
		   Instructions/s_b.c\
		   Instructions/s_s.c
		   
		   

SRC_ERROR = Error/ft_check_arg1.c\
			Error/ft_check_errors_start.c\
			Error/ft_check_multiple_arg.c\
			Error/verif_double.c\
			Error/compare_to_int.c\
			Error/ft_check_arg1v2.c

SRC_LIST = 	Starting/convert_lst_into_tab.c\
			Starting/convert_str_into_tab.c\
			Starting/define_cmpt.c\
			Starting/init_list.c\
			Starting/make_int_tab.c\
			Starting/nbr_cmpt_lst_multiple.c\
			Starting/nbr_cmpt_lst.c	  

ALL_SRC = $(SRC_ALGO)\
		  $(SRC_ERROR)\
		  $(SRC_LIST)\
		  $(SRC_TOOLS)\
		  $(SRC_START)\
		  $(SRC_MAIN)


OBJS = $(ALL_SRC:.c=.o)

R_LIBFT = make  -C  Libft

RE_LIBFT = make re -C  Libft

all : $(NAME)

re : fclean all

$(NAME) : $(OBJS)
		$(RE_LIBFT)
		@gcc -g -Wall -Werror -Wextra -o $(NAME) $(OBJS) $(LIBFT)
clean :
		@make clean -C Libft
		@rm -rf $(OBJS)
		@rm -rf object

fclean : clean
	rm -rf $(NAME)
	rm -rf Libft/libft.a
