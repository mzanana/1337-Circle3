/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 04:02:49 by mzanana           #+#    #+#             */
/*   Updated: 2025/04/03 22:47:16 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// Libraries
#include <stdio.h> // NULL
#include <stdlib.h> // malloc
#include <limits.h> // int_max int_min
#include <unistd.h> // write

// Struct of the stack
typedef struct s_stack
{
    int data;
    struct s_stack *next;
} t_stack;

// op_helpers : swap, push and rotate + rrr.
void	ft_swap(t_stack **stack);
void	ft_push(t_stack **sta, t_stack **stb);
void	ft_rotate(t_stack **stack);
void	ft_reverse_rot(t_stack **stack);

// op_push_swap : sa, sb, ss, pa, pb.
void    sa(t_stack **stack);
void    sb(t_stack **stack);
void	ss(t_stack **sta, t_stack **stb);
void    pa(t_stack **sta, t_stack **stb);
void    pb(t_stack **stb, t_stack **sta);

// op_rotate : ra, rb, rr, rra, rrb,.
void    ra(t_stack **stack);
void    rb(t_stack **stack);
void	rr(t_stack **sta, t_stack **stb);


// parsing.c
t_stack*    ft_parsing(char **av, int ac);
int         ft_atoi(char *str, char **split, t_stack *stack);
int         is_valid(char *str);
int         is_num(char c);
void        ft_error(char **str, t_stack **st);
//ft_split.c
char**      ft_split(char *str);
void        jump_spaces(char *str, int *i);
void        free_split(char **str);
int         ft_stringlen(char *str, int start);
int         ft_countword(char *str);
// helpers1.c
void        ft_putstr(char *str);
int         ft_strlen(char *str);
int         num_duplicate(t_stack *stack, int num);
int         check_number(char *str);
// ft_linkedlist.c
void	lst_addback(t_stack **head, int num);
void	free_stack(t_stack **head);
int     lst_size(t_stack *stack);
int     is_sorted(t_stack *stack);
#endif