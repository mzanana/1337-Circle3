/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 16:41:36 by mzanana           #+#    #+#             */
/*   Updated: 2025/03/28 23:37:54 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ra(t_stack **stack)
{
	write (1, "ra\n", 3);
	ft_rotate(stack);
}

void    rb(t_stack **stack)
{
	write (1, "rb\n", 3);
	ft_rotate(stack);
}
void	rr(t_stack **sta, t_stack **stb)
{
	write (1, "rr\n", 3);
	ft_rotate(sta);
	ft_rotate(stb);
}
