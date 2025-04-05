/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunks_sorting.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 01:04:00 by mzanana           #+#    #+#             */
/*   Updated: 2025/04/05 03:24:44 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void 	sort_arr(int *arr, int size)
{
	int i, swap, j;

	i = 0;
	while (i < size)
	{
		j = i;
		while (j < size)
		{
			if (arr[i] > arr[j])
			{
				swap = arr[i];
				arr[i] = arr[j];
				arr[j] = swap;
			}
			j++;
		}
		i++;
	}
}

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
	sort_arr(ret, size);
	return ret;
}
void    chunks_sorting(t_stack **sta, t_stack **stb)
{
	int	(min), (max), (size), (holder);
	int	*arr;

	arr = fill_arr(*sta);
}