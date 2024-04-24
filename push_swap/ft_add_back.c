/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_back.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: @fgonzal2 <fgonzal2@studen.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 12:12:50 by @fgonzal2         #+#    #+#             */
/*   Updated: 2024/04/10 10:49:26 by @fgonzal2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//add a node tothe stack from back side
void	ft_add_back(t_stack **stack, t_stack *stack_new)
{
	if (!stack)
		return (0);
	if (!*stack)
		*stack = stack_new;
	else
		(ft_lst_last(*stack))->next = stack_new;
}
