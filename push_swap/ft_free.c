/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 10:52:45 by fgonzal2          #+#    #+#             */
/*   Updated: 2024/06/12 13:41:18 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_free(t_stack **stack)
{
	t_stack	*node;
	t_stack	*swp;

	if (!stack)
		return ;
	node = *stack;
	while (node)
	{
		swp = node->next;
		node->content = 0;
		node->index = 0;
		node->cost = 0;
		if (node->target)
			node->target = NULL;
		free(node);
		node = swp;
	}
	*stack = (0);
}

void	free_array(char **arr)
{
	int		i;

	i = 0;
	while (arr[i])
	{
		free (arr[i]);
		i++;
	}
	free(arr);
}
