/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 21:23:24 by mzanana           #+#    #+#             */
/*   Updated: 2025/03/26 23:42:49 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_num(char c)
{
	if ((c >= '0' && c <= '9') || c == '-' || c == '+' || c == ' ')
		return 1;
	else
		return 0;
}

int is_valid(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!is_num(str[i]))
			return 0;
		i++;
	}
	return 1;
}
int ft_countword(char *str)
{
	int i;
	int ret;
	int flag;

	i = 0;
	while (str[i] && str[i] == ' ')
		i++;
	ret = 0;
	// if (str[i])
	// 	ret++;
	flag = 1;
	while (str[i])
	{
		if (str[i] != ' ' && flag == 1)
		{
			flag = 0;
			ret++;
		}
		else if (str[i] == ' ' && flag == 0)
			flag = 1;
		i++;
	}
	return ret;
}
char **ft_split(char *str)
{
	int		i;
	char	**ret;

	i = 0;
	while (str[i] && str[i] == ' ')
		i++;
	ret = malloc (sizeof(char*) * (ft_countword(str) + 1));
	
}

t_stack *ft_parsing(char **av, int ac)
{
	t_stack *ret;
	char 	**sp;
	int		i;
	int		j;
	int		num;
	
	i = 1;
	while (i < ac)
	{
		if (!is_valid(av[i]))
			return NULL;
		sp = ft_split(av[i]);
	}
	
}