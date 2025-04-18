/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 23:47:38 by mzanana           #+#    #+#             */
/*   Updated: 2025/04/18 00:16:17 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fract_ol.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int		ret;
	size_t	index;

	index = 0;
	while (s1[index] && s2[index] && ((unsigned char)*(s1 + index) == (unsigned char)*(s2 + index)))
		index++;
	ret = ((unsigned char)*(s1 + index)) - ((unsigned char)*(s2 + index));
	return (ret);
}
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write (1, &str[i++], 1);
}