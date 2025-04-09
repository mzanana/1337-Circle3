/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:56:53 by mzanana           #+#    #+#             */
/*   Updated: 2025/04/09 13:08:11 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"


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