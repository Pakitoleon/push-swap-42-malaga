/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: @fgonzal2 <fgonzal2@studen.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:13:16 by @fgonzal2         #+#    #+#             */
/*   Updated: 2024/04/11 13:18:49 by @fgonzal2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// return the last element from statck.
t_stack	*ft_lst_last(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// return the size of the stack.
int	ft_lst_size(t_stack *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// finds and return the smallest number in the stack
int	ft_min(t_stack *a)
{
	int	i;

	i = a->nbr;
	while (a)
	{
		if (a->nbr < i)
			i = a->nbr;
		a = a->next;
	}
	return (i);
}

//finds and return the bigest number in the stack
int	ft_max(t_stack *a)
{
	int	i;

	i = a->nbr;
	while (a)
	{
		if (a->nbr > i)
			i = a->nbr;
		a = a->next;
	}
	return (i);
}
