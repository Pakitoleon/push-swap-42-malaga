/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_position.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:33:23 by fgonzal2          #+#    #+#             */
/*   Updated: 2024/06/11 12:15:18 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	look_position(t_stack **a, t_stack *move)
{
	t_stack	*target;

	target = move->target;
	if(move->is_upper && !(target->is_upper))
	{
		if(target->index - move->index < target->mid)
			target->is_upper = 1;
	}
	else if(!(move->is_upper) && target->is_upper)
	{
		if (taget->index + stack_len(*a - move->index) > target->mid)
			target->is_upper = 0;
	}
	
}

void	complete_b( t_stack **a, t_stack **b, t_stack *move)
{
	look_position(a, move);
	if(move->is_upper && move->target->is_upper)
	{
		while(*a !=move && *b != move->targer)
			rr(a, b);
	}
	else if(!(move->is_upper) && !(move->target->is_upper))
	{
		while (*a != move && *b != move->target)
			rrr(a, b);
	}
	top_node_a(move, a);
	top_node_b(move->target, b);
	pb(a, b);
}

void	sort_out_b(t_stack **a, t_stack **b)
{
	pb(a, b);
	if(stack_len(*a) > 3 && !stack_sorted(*a))
		pb(a, b);
	while (stack_len(*a) > 3 && !stack_sorted(*a))
	{
		stack_a_target(*a, *b);
		complete_b( a, b, stack_structure(*a, *b));
	}
}

void	biggest_sort(t_stack **a, t_stack **b)
{
	sort_out_b(a, b);
	if(!stack_sorted(a, b))
		sort_stack(a, b);
	while (*b)
	{
		stack_index_side(*a);
		stack_index_side(*b);
		stack_b_target(*a, *b);
		top_node_a((*b)->target, a);
	}
	top_node_a(min_stack(*a), a);

}