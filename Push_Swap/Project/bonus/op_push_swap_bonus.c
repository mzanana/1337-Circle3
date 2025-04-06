/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push_swap_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 06:54:42 by mzanana           #+#    #+#             */
/*   Updated: 2025/04/06 06:55:14 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	sa(t_stack **stack)
{
	ft_swap (stack);
}

void	sb(t_stack **stack)
{
	ft_swap(stack);
}

void	ss(t_stack **sta, t_stack **stb)
{
	ft_swap (sta);
	ft_swap (stb);
}

void	pa(t_stack **sta, t_stack **stb)
{
	ft_push(sta, stb);
}

void	pb(t_stack **stb, t_stack **sta)
{
	ft_push(stb, sta);
}
