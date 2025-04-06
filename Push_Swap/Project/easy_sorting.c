/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easy_sorting.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 21:11:40 by mzanana           #+#    #+#             */
/*   Updated: 2025/04/06 00:13:52 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_sort(t_stack **st)
{
	int (f), (s), (t);
	f = (*st)->data;
	s = (*st)->next->data;
	t = (*st)->next->next->data;
	if (f > s && f > t)
		ra(st);
	if (s > f && s > t)
		rra(st);
	if ((*st)->data > (*st)->next->data)
		sa(st);
}

int	min_pos(t_stack *st)
{
	t_stack	*tmp;

	int (pos), (i), (min);
	min = st->data;
	tmp = st;
	i = 0;
	pos = 0;
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
	return (pos);
}

void	easy_sorting(t_stack **sta, t_stack **stb)
{
	int (a_size), (pos), (b_size);
	a_size = lst_size(*sta);
	if (a_size == 2)
	{
		sa(sta);
		return ;
	}
	while (a_size > 3)
	{
		pos = min_pos(*sta);
		if (pos <= a_size / 2)
			while (pos-- > 0)
				ra(sta);
		else
			while (pos++ < a_size)
				rra(sta);
		pb(stb, sta);
		a_size--;
	}
	three_sort(sta);
	b_size = lst_size(*stb);
	while (b_size-- > 0)
		pa(sta, stb);
}
