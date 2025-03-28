/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 04:02:49 by mzanana           #+#    #+#             */
/*   Updated: 2025/03/28 00:47:14 by mzanana          ###   ########.fr       */
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

// operations_1 : sa, sb, ss, pa, pb.
void    sa(t_stack **st);
void    sb(t_stack **st);
void    ss(t_stack **st1, t_stack **st2);
void    pa(t_stack **st1, t_stack **st2);
void    pb(t_stack **st1, t_stack **st2);

// operations_2 : ra, rb, rr.

// operations_3 : rra, rrb, rrr.

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
#endif