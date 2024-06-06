/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_funcions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:13:16 by @fgonzal2         #+#    #+#             */
/*   Updated: 2024/06/06 16:39:40 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// return the size of the stack.
int	ft_stack_size(t_stack *stack)
{
	int	i;

	i = 0;
	if (!stack)
		return (0);
	while (stack->next)
	{
		stack = stack->next;
		i++;
	}
	i++;
	return (i);
}

// finds and return the smallest number in the stack
t_stack	*ft_min(t_stack *stack)
{
	int	min;
	t_stack	*stack_node;

	min = stack->content;
	stack_node = stack;
	while (stack->next)
	{
		stack = stack->next;
		if (min > stack->content)
		{
			min = stack->content;
			stack_node = stack;
		}
	}
	return (stack_node);
}

//finds and return the bigest number in the stack
t_stack	*ft_max(t_stack *stack)
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
		if (max < stack->content)
		{
			max = stack->content;
			stack_node = stack;
		}
	}
	return (stack_node);
}

void	stack_add(t_stack **a, int n)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	new_node->content = n;
	new_node->next = NULL;
	if (!(*a))
	{
		new_node->prev = NULL;
		*a = new_node;
	}
	else
	{
		ft_last_node(*a)->next = new_node;
		new_node->prev = ft_last_node(*a);
	}
}

void	stack_init(t_stack **a, char **nbr)
{
	int		i;
	long	n;

	i = 0;
	n = 0;
	while(nbr[i] != NULL)
	{
		n = ft_atol(nbr[i]);
		if(n > INT_MAX || n < INT_MIN)
		{
			ft_stack_free(a);
			ft_print_error();
		}
		stack_add(a, (int)n);
		i++;
	}
}

t_stack	*ft_last_node(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}
