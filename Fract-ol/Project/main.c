/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 23:45:21 by mzanana           #+#    #+#             */
/*   Updated: 2025/04/18 17:34:33 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fract_ol.h"

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	is_double(char *str)
{
	int (i), (dot), (ret);
	i = 0;
	while (str[i] && str[i] == ' ')
		i++;
	if (str[i] && (str[i] == '+' || str[i] == '-'))
		i++;
	dot = 0;
	ret = 0;
	while (str[i] && (is_digit(str[i]) || str[i] == '.'))
	{
		if (str[i] == '.' && dot++)
			return (0);
		if (is_digit(str[i]))
			ret++;
		i++;
	}
	while (str[i] && str[i] == ' ')
		i++;
	if (str[i])
		return (0);
	return (ret);
}

int	main(int ac, char **av)
{
	if (ac == 2 && !ft_strcmp(av[1], "mandelbrot"))
		return (/*mandelbrot_win()*/1);
	else if (ac == 4 && !ft_strcmp(av[1], "julia"))
	{
		if (!is_double(av[2]) || !is_double(av[3]))
		{
			ft_putstr("Make sure that the x and y are valid float numbers\
				\nExample of valid input : ./fractol julia -0.5 1.5\n");
			exit(1);
		}
		return (/*julia_win(ac, av)*/0);
	}	
	else
	{
		ft_putstr("Make sure that your input is one of the two examples: \
			\n1-> ./fractol mandelbrot\
			\n2-> ./fractol julia x y\n");
		return (1);
	}
}
