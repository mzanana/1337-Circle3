/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 20:52:30 by mzanana           #+#    #+#             */
/*   Updated: 2025/04/06 06:37:50 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *origin, char *added)
{
	char	*ret;
	int		orlen;
	int		adlen;

	adlen = ft_strlen(added);
	orlen = ft_strlen(origin);
	if (!adlen && !orlen)
		return (free(origin), free(added), NULL);
	if (!orlen)
		return (free(origin), ft_substr(added, 0, adlen, 1));
	if (!adlen)
		return (free(added), ft_substr(origin, 0, orlen, 1));
	ret = malloc(sizeof(char) * (adlen + orlen + 1));
	if (!ret)
		return (free(origin), free(added), NULL);
	ft_strncpy(ret, origin, orlen);
	ft_strncpy(ret + orlen, added, adlen);
	free(origin);
	free(added);
	return (ret);
}

char	*get_next_line(int fd)
{
	char		*buffer;
	static char	*box;
	ssize_t		readret;
	ssize_t		checkpoint;

	while (1)
	{
		if (fd < 0 || BUFFER_SIZE <= 0)
			return (NULL);
		buffer = malloc(sizeof(char) * (ssize_t)BUFFER_SIZE + 1);
		readret = read(fd, buffer, BUFFER_SIZE);
		if (!buffer || readret == -1)
			return (free(buffer), free(box), box = NULL, NULL);
		buffer[readret] = '\0';
		box = ft_strjoin(box, buffer);
		if (ft_strchr(box, &checkpoint))
		{
			buffer = ft_substr(box, 0, ++checkpoint, 0);
			box = ft_strncpy(box, box + checkpoint, ft_strlen(box
						+ checkpoint));
			return (buffer);
		}
		if (!readret)
			return (buffer = box, box = NULL, buffer);
	}
}
