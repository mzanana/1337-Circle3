/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 05:23:50 by mzanana           #+#    #+#             */
/*   Updated: 2025/04/06 05:59:31 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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