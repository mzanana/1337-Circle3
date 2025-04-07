/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 03:30:49 by mzanana           #+#    #+#             */
/*   Updated: 2025/04/07 03:30:50 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "checker_bonus.h"

int	ft_countword(char *str)
{
	int	i;
	int	ret;
	int	flag;

	i = 0;
	while (str[i] && str[i] == ' ')
		i++;
	ret = 0;
	if (str[i])
		ret++;
	flag = 1;
	while (str[i])
	{
		if (str[i] != ' ' && flag == 0)
		{
			flag = 1;
			ret++;
		}
		else if (str[i] == ' ' && flag == 1)
			flag = 0;
		i++;
	}
	return (ret);
}

int	ft_stringlen(char *str, int start)
{
	int	ret;

	ret = 0;
	while (str[start] && str[start] != ' ')
	{
		start++;
		ret++;
	}
	return (ret);
}

void	free_split(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

void	jump_spaces(char *str, int *i)
{
	int	k;

	k = *i;
	while (str[k] && str[k] == ' ')
	{
		k++;
		(*i)++;
	}
}

char	**ft_split(char *str)
{
	char	**ret;

	int (i), (j), (k);
	if (!str)
		return (NULL);
	ret = malloc (sizeof (char *) * (ft_countword (str) + 1));
	if (!ret || ft_countword (str) == 0)
		return (free (ret), NULL);
	i = 0;
	jump_spaces(str, &i);
	j = 0;
	while (str[i])
	{
		ret[j] = malloc(sizeof(char) * (ft_stringlen(str, i) + 1));
		if (!ret[j])
			return (free_split(ret), NULL);
		k = 0;
		while (str[i] && str[i] != ' ')
			ret[j][k++] = str[i++];
		ret[j][k] = '\0';
		jump_spaces(str, &i);
		j++;
	}
	ret[j] = 0;
	return (ret);
}
