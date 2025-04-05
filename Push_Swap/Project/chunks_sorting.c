/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunks_sorting.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 01:04:00 by mzanana           #+#    #+#             */
/*   Updated: 2025/04/05 03:23:57 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		*fill_arr(t_stack *sta)
{
	int *ret;
	int i, size;
	t_stack *tmp;

	size = lst_size(sta);
	ret = malloc (sizeof(int) * size);
	if (!ret)
		return NULL;
	tmp = sta;
	i = 0;
	while (tmp)
	{
		ret[i++] = tmp->data;
		tmp = tmp->next;
	}
	return ret;
}
void    chunks_sorting(t_stack **sta, t_stack **stb)
{
	int	(min), (max), (size), (holder);
	int	*arr;

	arr = fill_arr(*sta);
}