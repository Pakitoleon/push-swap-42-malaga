/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:44:32 by fgonzal2          #+#    #+#             */
/*   Updated: 2024/06/06 18:40:26 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	limits_stack(int *min, int *max, t_stack *stack)
{
	int	i;
	int	max_a;
	int	min_b;

	i = 1;
	*max = 1;
	*min = 1;
	min_b = stack->content;
	max_a = stack->content;
	while ( i <=(stack_len(stack)+1))
		i++;
	{
    stack = stack->next;
    if (min_b > stack->content)
    {
        min_b = stack->content;
        *min = i;
    }
    if (max_a < stack->content)
    {
        max_a = stack->content;
        *max = i;
    }
return (*min);
}