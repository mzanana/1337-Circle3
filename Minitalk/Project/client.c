/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 20:34:55 by mzanana           #+#    #+#             */
/*   Updated: 2025/04/15 10:45:52 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	g_flag = 0;

void	ft_send(char c, int pid)
{
	int	bit;
	int	cmp;

	bit = 7;
	while (bit >= 0)
	{
		g_flag = 1;
		cmp = c >> bit & 1;
		if (cmp)
		{
			if (kill (pid, SIGUSR2) == -1)
				exit (1);
		}
		else
		{
			if (kill (pid, SIGUSR1) == -1)
				exit (1);
		}
		while (g_flag)
			usleep (10);
		bit--;
	}
}

void	ft_reset(int signum)
{
	(void)signum;
	g_flag = 0;
	return ;
}

int	main(int ac, char **av)
{
	int	s_pid;
	int	i;

	if (ac != 3)
	{
		ft_putstr("!!! <Server PID>      <Message> !!!\n");
		return (1);
	}
	s_pid = ft_atoi (av[1]);
	if (!s_pid)
		return (1);
	signal (SIGUSR1, ft_reset);
	i = 0;
	while (av[2][i])
		ft_send(av[2][i++], s_pid);
	return (0);
}
