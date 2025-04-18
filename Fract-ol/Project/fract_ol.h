/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fract_ol.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 19:28:39 by mzanana           #+#    #+#             */
/*   Updated: 2025/04/18 17:28:41 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACT_OL_H
# define FRACT_OL_H

// # include "mlx/mlx.h"
# include <unistd.h>
# include <stdlib.h>

void	ft_putstr(char *str);
int		ft_strcmp(const char *s1, const char *s2);
int		is_double (char *str);
int		is_digit(char c);

#endif