/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:56:53 by mzanana           #+#    #+#             */
/*   Updated: 2025/04/14 21:14:29 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_atoi(char *str)
{
	long	ret;
	int		i;

	if (!str)
		return (0);
	i = 0;
	ret = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		ret = ret * 10 + (str[i] - '0');
		if ((ret) > INT_MAX)
			return (0);
		i++;
	}
	return ((int)(ret));
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write (1, &str[i++], 1);
}

void	ft_putnbr(int n)
{
	char c;
	
	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write (1, "-", 1);
		n = -n;
	}
	if (n > 9)
		ft_putnbr (n / 10);
	c = n % 10 + 48;
	write (1, &c, 1);
}