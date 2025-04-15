/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:53:01 by mzanana           #+#    #+#             */
/*   Updated: 2025/04/15 10:40:32 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

pid_t	g_old_pid = 0;

void	ft_header(void)
{
	ft_putstr ("My Process ID is : ");
	ft_putnbr (getpid ());
	write (1, "\n", 1);
}

void	handler(int signum, siginfo_t *info, void *context)
{
	static char	c = 0;
	static int	bit = 7;
	pid_t		current_pid;

	(void)context;
	current_pid = info->si_pid;
	if (g_old_pid != current_pid)
	{
		c = 0;
		bit = 7;
	}
	g_old_pid = current_pid;
	if (signum == SIGUSR2)
		c = c | (1 << bit);
	if (bit == 0)
	{
		write (1, &c, 1);
		if (c == '\0')
			kill (g_old_pid, SIGUSR2);
		c = 0;
		bit = 8;
	}
	bit--;
	kill (g_old_pid, SIGUSR1);
}

int	main(int ac, char **av)
{
	struct sigaction	sig;

	(void)av;
	if (ac > 1)
		return (1);
	ft_header();
	sig.sa_sigaction = &handler;
	sig.sa_flags = SA_SIGINFO;
	sigaction (SIGUSR1, &sig, NULL);
	sigaction (SIGUSR2, &sig, NULL);
	while (1)
		pause();
	return (0);
}
