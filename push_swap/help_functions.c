/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:13:16 by @fgonzal2         #+#    #+#             */
/*   Updated: 2024/05/30 12:55:17 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// return the last element from statck.
t_stack	*ft_last_stack(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

// return the size of the stack.
int	ft_stack_size(t_stack *stack)
{
	size_t	i;

	i = 0;
	if (!stack)
		return (0);
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

// finds and return the smallest number in the stack
int	ft_min(t_stack *stack)
{
	int	min;
	t_stack	stack_node;

	min = stack->content;
	stack_node = stack;
	while (stack->next)
	{
		stack = stack->next;
		if (stack->content < min)
		{
			min = stack->content;
			stack_node = stack;
		}
	}
	return (stack_node);
}

//finds and return the bigest number in the stack
int	ft_max(t_stack *stack)
{
	int	i;
	t_stack	*stack_node;
	int	max;
	
	i = 1;
	max = stack-> content;
	stack_node = stack;
	while (++i <= ft_stack_size(stack) + 1)
	{
		stack = stack->next;
		if (stack->content > max)
		{
			max = stack->content;
			stack_node = stack;
		}
	}
	return (stack_node);
}
