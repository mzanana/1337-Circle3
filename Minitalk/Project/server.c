/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:53:01 by mzanana           #+#    #+#             */
/*   Updated: 2025/04/14 20:33:39 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

pid_t client_pid = 0;

void	ft_header()
{
	ft_putstr ("My Process ID is : ");
	ft_putnbr (getpid ());
	write (1, "\n", 1);
}

void	handler(int signum, siginfo_t *info, void *context)
{
	static char	c = 0;
	static int	bit = 7;
	pid_t		pid_sender;

	(void)context;
	if (client_pid != pid_sender)
	{
		c = 0;
		bit = 7;
	}
	client_pid = pid_sender;
	if (signum == SIGUSR2)
		c = c | (1 << bit);
	if (bit == 0)
	{
		write (1, &c, 1);
		c = 0;
		bit = 8;
	}
	bit--;
}

int	main()
{
	struct sigaction	sig;
	
	ft_header();
	sig.sa_sigaction = &handler;
	sig.sa_flags = SA_SIGINFO;
	sigaction (SIGUSR1, &sig, NULL);
	sigaction (SIGUSR2, &sig, NULL);
	while (1)
		pause();
	return (0);
}