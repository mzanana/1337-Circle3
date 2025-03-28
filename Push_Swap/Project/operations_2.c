/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 16:41:40 by mzanana           #+#    #+#             */
/*   Updated: 2025/03/28 20:57:14 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack **stack)
{
	t_stack *tmp;
	
	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = (*stack)->next;
	(*stack)->next = tmp;
}

void	ft_push(t_stack **sta, t_stack **stb)
{
	t_stack *tmp;
	
	if (!(*stb))
		return ;
	tmp = (*stb)->next;
	(*stb)->next = *sta;
	*sta = *stb;
	*stb = tmp;	
}