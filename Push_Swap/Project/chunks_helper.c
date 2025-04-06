/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunks_helper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 04:17:44 by mzanana           #+#    #+#             */
/*   Updated: 2025/04/06 00:06:34 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_pos(t_stack *stb)
{
	t_stack	*tmp;

	int (pos), (i), (max);
	i = 0;
	pos = 0;
	tmp = stb;
	max = tmp->data;
	while (tmp)
	{
		if (tmp->data > max)
		{
			max = tmp->data;
			pos = i;
		}
		i++;
		tmp = tmp->next;
	}
	return (pos);
}

void	push_back_sta(t_stack	**sta, t_stack	**stb)
{
	int (pos), (b_size);
	b_size = lst_size(*stb);
	while (b_size > 0)
	{
		pos = max_pos(*stb);
		if (pos > b_size / 2)
			while (pos++ < b_size)
				rrb(stb);
		else if (pos <= b_size / 2)
			while (pos-- > 0)
				rb(stb);
		pa(sta, stb);
		b_size--;
	}
}
