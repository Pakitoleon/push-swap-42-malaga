/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: @fgonzal2 <fgonzal2@studen.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:15:36 by @fgonzal2         #+#    #+#             */
/*   Updated: 2024/04/18 15:31:55 by @fgonzal2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stack **a, int j)
// rotate "a"shift up elements of stack in 1
// the first goes last.
{
	t_stack	*tmp;

	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	*a = ft_lst_last(*a);
	(*a)->next = tmp;
	*a = tmp->next;
	tmp->next = NULL;
	if (j == 0)
		write(1, "ra\n", 3);
}

void	ft_sa(t_stack **a, int j)
// rotate "a" swap 2 first elements on top of a.
{
	t_stack	*tmp;

	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = (*a)->next;
	(*a)->next = tmp;
	if (j == 0)
		write(1, "sa\n", 3);
}

void	ft_pa(t_stack **a, t_stack **b, int j)
// take first element from "b" and push in "a".
{
	t_stack	*tmp;

	if (!*b)
		return ;
	tmp = *a;
	*a = *b;
	*b = (*b)->next;
	(*a)->next = tmp;
	if (j == 0)
		write(1, "pa\n", 3);
}

void	ft_rra(t_stack **a, int j)
// rotate, and the last element become the first
{
	t_stack	*tmp;
	int		i;

	if (!*a && !(*a))
		return ;
	i = 0;
	tmp = *a;
	while ((*a)->next)
	{
		*a = (*a)->next;
		i++;
	}
	(*a)->next = tmp : while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp - next = NULL;
	if (j == 0)
		write(1, "rra\n", 4);
}

void	ft_ss(t_stack **a, t_stack **b, int j)
{
	t_stack	*tmp;

	if (!*a || !((*a)->next) || !*b || !((*b)->next))
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = tmp;
	tmp = *b;
	*b = (*b)->next;
	(*b)->next = tmp;
	if (j == 0)
		write(1, "ss\n", 3);
}
