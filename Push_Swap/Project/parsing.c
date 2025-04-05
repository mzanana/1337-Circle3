/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 21:23:24 by mzanana           #+#    #+#             */
/*   Updated: 2025/04/05 23:57:15 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(char	**str, t_stack	**st)
{
	write(2, "Error\n", 6);
	if (str)
		free_split(str);
	if (st)
		free_stack(st);
	exit (1);
}

int	is_num(char c)
{
	if ((c >= '0' && c <= '9') || c == '-' || c == '+' || c == ' ')
		return (1);
	else
		return (0);
}

int	is_valid(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!is_num(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *str, char **split, t_stack *stack)
{
	long	ret;
	int		i;
	int		sign;

	if (!str)
		return (0);
	i = 0;
	sign = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	ret = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		ret = ret * 10 + (str[i] - '0');
		if ((ret * sign) > INT_MAX || (ret * sign) < INT_MIN)
			ft_error(split, &stack);
		i++;
	}
	return ((int)(ret * sign));
}

t_stack	*ft_parsing(char **av, int ac)
{
	t_stack	*stack;
	char	**split;

	int (i), (j), (num);
	stack = NULL;
	i = 1;
	while (i < ac)
	{
		if (!is_valid(av[i]))
			ft_error(NULL, &stack);
		split = ft_split(av[i]);
		if (!split)
			ft_error(NULL, &stack);
		j = 0;
		while (split[j])
		{
			num = ft_atoi(split[j], split, stack);
			if (!check_number(split[j++]) || num_duplicate(stack, num))
				ft_error(split, &stack);
			lst_addback(&stack, num);
		}
		free_split(split);
		i++;
	}
	return (stack);
}
