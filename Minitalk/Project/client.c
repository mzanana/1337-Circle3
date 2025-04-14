/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 20:34:55 by mzanana           #+#    #+#             */
/*   Updated: 2025/04/14 21:19:05 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int main (int ac, char **av)
{
	int s_pid;
	int i;

	if (ac != 3)
	{
		ft_putstr("!!! <Server PID>      <Message> !!!\n");
		return (1);
	}
	s_pid = ft_atoi (av[1]);
	if (!s_pid)
		return (1);
	i = 0;
	while (av[2][i])
		ft_send(av[2][i++], s_pid);
	ft_send ('\0', s_pid);
	return (0);
}