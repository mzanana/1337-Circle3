/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers1_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 03:30:23 by mzanana           #+#    #+#             */
/*   Updated: 2025/04/07 03:58:01 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_number(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	if (str[i + 1] && (str[i] == '+' || str[i] == '-'))
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	num_duplicate(t_stack *stack, int num)
{
	while (stack)
	{
		if (stack->data == num)
			return (1);
		stack = stack->next;
	}
	return (0);
}
