/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 02:45:05 by mzanana           #+#    #+#             */
/*   Updated: 2025/03/27 03:35:57 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void ft_putstr(char *str)
{
    int len;

    if (!str)
        return ;
    len = ft_strlen(str);
    write(1, str, len);
}
void ft_error(char **str, t_stack *st)
{
    ft_putstr("Error\n");
    if (str)
        free_split(str);
    if (st)
        free_stack(st);
    exit (1);
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
		if (str[i] <= '0' || str[i] >= '9')
			return 0;
		i++;
	}
	return 1;
}