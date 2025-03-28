/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 16:40:58 by mzanana           #+#    #+#             */
/*   Updated: 2025/03/28 23:34:10 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// sa, sb, ss, pa, pb.

void	sa(t_stack **stack)
{
	ft_swap (stack);
	write (1, "sa\n", 3);
}

void	sb(t_stack **stack)
{
	ft_swap(stack);
	write (1, "sb\n", 3);
}

void	ss(t_stack **sta, t_stack **stb)
{
	ft_swap (sta);
	ft_swap (stb);
	write (1, "ss\n", 3);
}
void    pa(t_stack **sta, t_stack **stb)
{
	write (1, "pa\n", 3);
	ft_push(sta, stb);
}
void    pb(t_stack **stb, t_stack **sta)
{
	write (1, "pb\n", 3);
	ft_push(stb, sta);
}
