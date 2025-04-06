/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkedlist_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 06:31:29 by mzanana           #+#    #+#             */
/*   Updated: 2025/04/06 06:31:52 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	lst_addback(t_stack **head, int num)
{
	t_stack	*new;
	t_stack	*tmp;

	new = malloc (sizeof(t_stack));
	if (!head || !new)
		return ;
	new->data = num;
	new->next = NULL;
	if (!(*head))
	{
		*head = new;
		return ;
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

int	lst_size(t_stack *stack)
{
	int		ret;
	t_stack	*tmp;

	if (!stack)
		return (0);
	tmp = stack;
	ret = 0;
	while (tmp)
	{
		ret++;
		tmp = tmp->next;
	}
	return (ret);
}

void	free_stack(t_stack **head)
{
	t_stack	*tmp;

	if (!head)
		return ;
	tmp = *head;
	while ((*head))
	{
		tmp = (*head)->next;
		free((*head));
		(*head) = tmp;
	}
}

int	is_sorted(t_stack *stack)
{
	if (!stack || !stack->next)
		return (1);
	while (stack->next)
	{
		if (stack->data > stack->next->data)
			return (0);
		stack = stack->next;
	}
	return (1);
}