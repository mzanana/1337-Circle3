/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 02:45:05 by mzanana           #+#    #+#             */
/*   Updated: 2025/03/28 00:58:59 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_putstr(char *str)
{
    int len;

    if (!str)
        return ;
    len = ft_strlen(str);
    write(1, str, len);
}

int ft_strlen(char *str)
{
    int i;

    if (!str)
        return 0;
    i = 0;
    while (str[i])
        i++;
    return i;
}

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
		if (str[i] < '0' || str[i] > '9')
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
