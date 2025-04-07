/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 03:28:42 by mzanana           #+#    #+#             */
/*   Updated: 2025/04/07 04:04:50 by mzanana          ###   ########.fr       */
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

int	operation(char *line, t_stack **sta, t_stack **stb)
{
	if (!ft_strcmp(line, "sa\n"))
		sa(sta);
	else if (!ft_strcmp(line, "sb\n"))
		sb(stb);
	else if (!ft_strcmp(line, "ss\n"))
		ss(sta, stb);
	else if (!ft_strcmp(line, "pa\n"))
		pa(sta, stb);
	else if (!ft_strcmp(line, "pb\n"))
		pb(stb, sta);
	else if (!ft_strcmp(line, "ra\n"))
		ra(sta);
	else if (!ft_strcmp(line, "rb\n"))
		rb(stb);
	else if (!ft_strcmp(line, "rr\n"))
		rr(sta, stb);
	else if (!ft_strcmp(line, "rra\n"))
		rra(sta);
	else if (!ft_strcmp(line, "rrb\n"))
		rrb(stb);
	else if (!ft_strcmp(line, "rrr\n"))
		rrr(sta, stb);
	else
		return (0);
	return (1);
}

void	check_line(char *line, t_stack **sta, t_stack **stb)
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
		check_line(line, &sta, &stb);
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
