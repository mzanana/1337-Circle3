/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_helpers_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 06:08:29 by mzanana           #+#    #+#             */
/*   Updated: 2025/04/06 06:27:41 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"


void	ft_swap(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = (*stack)->next;
	(*stack)->next = tmp;
}

void	ft_push(t_stack **sta, t_stack **stb)
{
	t_stack	*tmp;

	if (!(*stb))
		return ;
	tmp = (*stb)->next;
	(*stb)->next = *sta;
	*sta = *stb;
	*stb = tmp;
}

void	ft_rotate(t_stack **stack)
{
	t_stack	*holder;
	t_stack	*current;

	if (!(*stack) || !(*stack)->next)
		return ;
	holder = *stack;
	*stack = holder->next;
	current = *stack;
	while (current->next)
		current = current->next;
	current->next = holder;
	holder->next = NULL;
}

void	ft_reverse_rot(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*prev;

	if (!(*stack) || !(*stack)->next)
		return ;
	tmp = *stack;
	prev = NULL;
	while (tmp->next)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	tmp->next = *stack;
	prev->next = NULL;
	*stack = tmp;
}

void	rrr(t_stack **sta, t_stack **stb)
{
	rra(sta);
	rrb(stb);
}
