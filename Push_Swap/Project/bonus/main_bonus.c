/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 05:23:50 by mzanana           #+#    #+#             */
/*   Updated: 2025/04/06 06:04:02 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}

int	execute(char *oper, t_stack **sta, t_stack **stb)
{
	if (!ft_strcmp(oper, "sa\n"))
		sa(sta);
	else if (!ft_strcmp(oper, "sb\n"))
		sb(stb);
	else if (!ft_strcmp(oper, "ss\n"))
		ss(sta, stb);
	else if (!ft_strcmp(oper, "pa\n"))
		pa(sta, stb);
	else if (!ft_strcmp(oper, "pb\n"))
		pb(sta, stb);
	else if (!ft_strcmp(oper, "ra\n"))
		ra(sta);
	else if (!ft_strcmp(oper, "rb\n"))
		rb(stb);
	else if (!ft_strcmp(oper, "rr\n"))
		rr(sta, stb);
	else if (!ft_strcmp(oper, "rra\n"))
		rra(sta);
	else if (!ft_strcmp(oper, "rrb\n"))
		rrb(stb);
	else if (!ft_strcmp(oper, "rrr\n"))
		rrr(sta, stb);
	else
		return (0);
	return (1);
}

void	apply_oper(t_stack **sta, t_stack **stb)
{
	char	*op;

	op = get_next_line(0);
	while (op)
	{
		if (!execute(op, sta, stb))
		{
			free(op);
			write(2, "Error\n", 6);
			get_next_line(-1);
			free_stack(sta);
			free_stack(stb);
			exit(1);
		}
		free(op);
		op = get_next_line(0);
	}
}

void	result(t_stack *stack_a, t_stack *stack_b)
{
	int	size_b;

	size_b = stack_size(stack_b);
	if (size_b > 0 || !already_sorted(stack_a))
		write(1, "KO\n", 3);
	else
		write(1, "OK\n", 3);
}

int	main(int ac, char **av)
{
	t_stack		*sta;
	t_stack		*stb;
	int			size;

	if (ac < 2)
		return (0);
	stb = NULL;
	sta = ft_parsing(av, ac);
	if (!sta)
		ft_error(NULL, NULL);
	apply_oper(&sta, &stb);
	result (sta, stb);
	if (stb)
		free_stack(&stb);
	free_stack(&sta);
	return (0);
}