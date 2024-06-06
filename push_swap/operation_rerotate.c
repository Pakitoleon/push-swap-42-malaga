/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rerotate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 14:31:24 by fgonzal2          #+#    #+#             */
/*   Updated: 2024/06/06 16:36:00 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrotate(t_stack **stack)
{
	t_stack	*find_last;
	t_stack	*to_first;
	int		i;

	if (!(*stack) || !(*stack)->next)
		return ;
	find_last = (*stack);
	to_first = ft_last_node(*stack);
	i = stack_len(*stack) - 1;
	while (--i > 0)
		find_last = find_last->next;
	find_last->next = NULL;
	to_first->prev = NULL;
	to_first->next = (*stack);
	(*stack) = to_first;
}

void	rra(t_stack **a)
{
	ft_printf("rra\n");
	rrotate(a);
}

void	rrb(t_stack **b)
{
	ft_printf("rrb\n");
	rrotate(b);
}

void	rrr(t_stack **a, t_stack **b)
{
	ft_printf("rrr\n");
	rrotate(a);
	rrotate(b);
}