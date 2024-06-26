/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:52:38 by @fgonzal2         #+#    #+#             */
/*   Updated: 2024/06/26 09:48:07 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack	*first;

	if (!(*stack) || !(*stack)->next)
		return ;
	first = (*stack);
	first->prev = ft_last_node(*stack);
	ft_last_node(*stack)->next = first;
	*stack = (*stack)->next;
	first->next = NULL;
	(*stack)->prev = NULL;
}

void	ra(t_stack **a)
{
	printf("ra\n");
	rotate(a);
}

void	rb(t_stack **b)
{
	printf("rb\n");
	rotate(b);
}

void	rr(t_stack **a, t_stack **b)
{
	printf("rr\n");
	rotate(a);
	rotate(b);
}
