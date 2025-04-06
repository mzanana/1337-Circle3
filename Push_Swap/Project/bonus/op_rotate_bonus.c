/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 06:24:43 by mzanana           #+#    #+#             */
/*   Updated: 2025/04/06 06:25:19 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ra(t_stack **stack)
{
	ft_rotate (stack);
}

void	rb(t_stack **stack)
{
	ft_rotate (stack);
}

void	rr(t_stack **sta, t_stack **stb)
{
	ft_rotate (sta);
	ft_rotate (stb);
}

void	rra(t_stack **stack)
{
	ft_reverse_rot (stack);
}

void	rrb(t_stack **stack)
{
	ft_reverse_rot (stack);
}
