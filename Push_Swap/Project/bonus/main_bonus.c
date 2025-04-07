/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 03:28:42 by mzanana           #+#    #+#             */
/*   Updated: 2025/04/07 03:28:49 by mzanana          ###   ########.fr       */
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

int	execute_instruction(char *cmd, t_stack **stack_a, t_stack **stack_b)
{
	if (!ft_strcmp(cmd, "sa\n"))
		sa(stack_a);
	else if (!ft_strcmp(cmd, "sb\n"))
		sb(stack_b);
	else if (!ft_strcmp(cmd, "ss\n"))
		ss(stack_a, stack_b);
	else if (!ft_strcmp(cmd, "pa\n"))
		pa(stack_a, stack_b);
	else if (!ft_strcmp(cmd, "pb\n"))
		pb(stack_b, stack_a);
	else if (!ft_strcmp(cmd, "ra\n"))
		ra(stack_a);
	else if (!ft_strcmp(cmd, "rb\n"))
		rb(stack_b);
	else if (!ft_strcmp(cmd, "rr\n"))
		rr(stack_a, stack_b);
	else if (!ft_strcmp(cmd, "rra\n"))
		rra(stack_a);
	else if (!ft_strcmp(cmd, "rrb\n"))
		rrb(stack_b);
	else if (!ft_strcmp(cmd, "rrr\n"))
		rrr(stack_a, stack_b);
	else
		return (0);
	return (1);
}

void	ft_check_moves(char *line, t_stack **sta, t_stack **stb)
{
	if (!line)
		return ;
	if (!execute_instruction(line, sta, stb))
	{
		write(2, "Error\n", 6);
		free(line);
		free_stack(sta);
		free_stack(stb);
		exit(1);
	}
	free(line);
}

int	main(int ac, char **av)
{
	t_stack		*sta;
	t_stack		*stb;
	char		*line;
	
	if (ac < 2)
		return (0);
	stb = NULL;
	sta = ft_parsing(av, ac);
	if (!sta)
		ft_error(NULL, NULL);
	while (1)
	{
		line = get_next_line(0);
		ft_check_moves(line, &sta, &stb);
		if (!line)
			break ;
	}
	if (is_sorted(sta) && !stb)
		write (1, "OK\n", 3);
	else
		write (1, "KO\n", 3);
	free_stack(&sta);
	free_stack(&stb);
}