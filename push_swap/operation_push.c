/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 14:32:59 by fgonzal2          #+#    #+#             */
/*   Updated: 2024/06/20 10:11:46 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **origin, t_stack **target)
{
	t_stack	*send;
	t_stack	*second_or;

	if (!(*origin))
		return ;
	send = (*origin);
	second_or = (*origin)->next;
	if (second_or)
		second_or->prev = NULL;
	if (!(*target))
		send->next = NULL;
	else
	{
		send->next = (*target);
		send->next->prev = send;
	}
	*origin = second_or;
	*target = send;
}

/*void	pa(t_stack **a, t_stack **b)
{
	ft_printf("pa\n");
	push(b, a);
}

void	pb(t_stack **a, t_stack **b)
{
	ft_printf("pb\n");
	push(a, b);
}*/
