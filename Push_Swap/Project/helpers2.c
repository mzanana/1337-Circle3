/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:06:58 by mzanana           #+#    #+#             */
/*   Updated: 2025/03/27 18:10:40 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_number(char *str)
{
	int i;

	if (!str)
		return 0;
	i = 0;
	if (str[i + 1] && (str[i] == '+' || str[i] == '-'))
		i++;
	while (str[i])
	{
		if (str[i] <= '0' || str[i] >= '9')
			return 0;
		i++;
	}
	return 1;
}

int	num_duplicate(t_stack *stack, int num)
{
	while (stack)
	{
		if (stack->data == num)
			return 1;
		stack = stack->next;
	}
	return 0;
}