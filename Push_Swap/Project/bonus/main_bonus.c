/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 05:23:50 by mzanana           #+#    #+#             */
/*   Updated: 2025/04/06 06:00:44 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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
}