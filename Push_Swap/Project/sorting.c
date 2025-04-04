/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 01:53:45 by mzanana           #+#    #+#             */
/*   Updated: 2025/04/04 21:37:21 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		min_pos(t_stack *st)
{
	int pos, i, min;
	t_stack *tmp;

	i = 0;
	pos = 0;
	min = st->data;
	tmp = st;
	while (tmp)
	{
		if (tmp->data < min)
		{
			pos = i;
			min = tmp->data;
		}
		tmp = tmp->next;
		i++;
	}
	return pos;
}


void    easy_sorting(t_stack **sta, t_stack **stb)
{
	int (a_size), (pos);

	a_size = lst_size(*sta); 
	if (a_size == 2)
		sa(sta);
	while (a_size > 3)
	{
		pos = min_pos(sta);
	}
}