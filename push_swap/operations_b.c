/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: @fgonzal2 <fgonzal2@studen.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:52:38 by @fgonzal2         #+#    #+#             */
/*   Updated: 2024/04/17 16:23:51 by @fgonzal2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rb(t_stack **b, int j)
// rotate "a"shift up elements of stack in 1
// the first goes last.
{
	t_stack	*tmp;

	if (!*b || !(*b)->next)
		return ;
	tmp = *b;
	*b = ft_ls_tlast(*b);
	(*b)->next = tmp;
	*b = tmp->next;
	tmp->next = NULL;
	if (j == 0)
		write(1, "rb\n", 3);
}

void	ft_sb(t_stack **b, int j)
// rotate "a" swap 2 first elements on top of a.
{
	t_stack	*tmp;

	if (!*b || !(*b)->next)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = (*b)->next;
	(*b)->next = tmp;
	if (j == 0)
		write(1, "sb\n", 3);
}

void	ft_pb(t_stack **b, t_stack **a, int j)
// take first element from "a" and push in "b".
{
	t_stack	*tmp;

	if (!*a)
		return ;
	tmp = *b;
	*b = *a;
	*a = (*a)->next;
	(*b)->next = tmp;
	if (j == 0)
		write(1, "pb\n", 3);
}

void	ft_rrb(t_stack **b, int j)
// rotate, and the last element become the first
{
	t_stack	*tmp;
	int		i;

	if (!*a && !(*b))
		return ;
	i = 0;
	tmp = *b;
	while ((*b)->next)
	{
		*b = (*b)->next;
		i++;
	}
	(*b)->next = tmp : while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp - next = NULL;
	if (j == 0)
		write(1, "rrb\n", 4);
}

void	ft_ss(t_stack **b, t_stack **a, int j)
{
	t_stack	*tmp;

	if (!*b || !((*b)->next) || !*a || !((*a)->next))
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = tmp;
	tmp = *a;
	*b = (*a)->next;
	(*a)->next = tmp;
	if (j == 0)
		write(1, "ss\n", 3);
}
