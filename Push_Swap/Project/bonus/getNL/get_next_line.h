/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 20:49:35 by mzanana           #+#    #+#             */
/*   Updated: 2025/01/25 01:36:48 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
int		ft_strlen(char *str);
char	*ft_substr(char *src, int from, int to, int flag);
char	*ft_strncpy(char *dst, char *src, int n);
int		ft_strchr(char *src, ssize_t *ptr);
char	*ft_strjoin(char *origin, char *added);

#endif
