/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:53:25 by mzanana           #+#    #+#             */
/*   Updated: 2025/04/15 10:52:32 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <signal.h>
# include <limits.h>
# include <stdlib.h>
# include <time.h>

// #include <bits/siginfo.h>
void	ft_header(void);
void	ft_putnbr(int n);
void	ft_putstr(char *str);
int		ft_atoi(char *str);

void	ft_send(char c, int pid);
void	ft_reset(int signum);

void	ft_header(void);
void	handler(int signum, siginfo_t *info, void *context);

#endif