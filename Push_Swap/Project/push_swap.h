/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 04:02:49 by mzanana           #+#    #+#             */
/*   Updated: 2025/03/27 01:22:41 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// Libraries
#include <stdio.h> // NULL
#include <stdlib.h> // malloc

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

// helpers

// ----> Split
char    **ft_split(char *str);
void    jump_spaces(char *str, int *i);
void    free_split(char **str, int i);
int     ft_stringlen(char *str, int start);
int     ft_countword(char *str);

#endif