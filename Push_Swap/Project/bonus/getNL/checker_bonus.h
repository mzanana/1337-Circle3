/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 03:24:43 by mzanana           #+#    #+#             */
/*   Updated: 2025/04/07 03:25:20 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

// Libraries
# include "getNL/get_next_line.h"
# include <stdio.h> // NULL
# include <stdlib.h> // malloc
# include <limits.h> // int_max int_min
# include <unistd.h> // write


typedef struct s_stack
{
	int					data;
	struct s_stack		*next;
}	t_stack;

// main_bonus.c 
void	apply_oper(t_stack **sta, t_stack **stb);
int		execute(char *oper, t_stack **sta, t_stack **stb);
void	result(t_stack *stack_a, t_stack *stack_b);

// op_helpers_bonus.c : swap, push and rotate + rrr.
void	ft_swap(t_stack **stack);
void	ft_push(t_stack **sta, t_stack **stb);
void	ft_rotate(t_stack **stack);
void	ft_reverse_rot(t_stack **stack);
void	rrr(t_stack **sta, t_stack **stb);

// op_push_swap_bonus.c : sa, sb, ss, pa, pb.
void	sa(t_stack **stack);
void	sb(t_stack **stack);
void	ss(t_stack **sta, t_stack **stb);
void	pa(t_stack **sta, t_stack **stb);
void	pb(t_stack **stb, t_stack **sta);

// op_rotate_bonus.c : ra, rb, rr, rra, rrb,.
void	ra(t_stack **stack);
void	rb(t_stack **stack);
void	rr(t_stack **sta, t_stack **stb);
void	rra(t_stack **stack);
void	rrb(t_stack **stack);

// parsing_bonus.c
t_stack	*ft_parsing(char **av, int ac);
int		ft_atoi(char *str, char **split, t_stack *stack);
int		is_valid(char *str);
int		is_num(char c);
void	ft_error(char **str, t_stack **st);

//ft_split_bonus.c
char	**ft_split(char *str);
void	jump_spaces(char *str, int *i);
void	free_split(char **str);
int		ft_stringlen(char *str, int start);
int		ft_countword(char *str);

// helpers1_bonus.c
int		ft_strlen(char *str);
int		num_duplicate(t_stack *stack, int num);
int		check_number(char *str);
int		ft_strcmp(char *s1, char *s2);

// ft_linkedlist_bonus.c
void	lst_addback(t_stack **head, int num);
void	free_stack(t_stack **head);
int		lst_size(t_stack *stack);
int		is_sorted(t_stack *stack);

#endif