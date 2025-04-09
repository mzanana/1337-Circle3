/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:53:01 by mzanana           #+#    #+#             */
/*   Updated: 2025/04/09 18:17:08 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_header()
{
	ft_putstr ("My Process ID is : ");
	ft_putnbr (getpid ());
	write (1, "\n", 1);
}

void	handler(int sig, siginfo_t *info, void *contex)
{}

int	main(int argc, char **argv)
{
	struct sigaction	sa;
	
	ft_header();
	sa.sa_sigaction = &handler;
}