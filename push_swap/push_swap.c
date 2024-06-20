/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:32:21 by @fgonzal2         #+#    #+#             */
/*   Updated: 2024/06/20 12:18:30 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	**nbrs;

	a = NULL;
	b = NULL;
	nbrs = 0;
	if (argc > 1)
		process_in(argc, argv, nbrs, &a);
	if (!stack_sorted(a))
		sort_stack(&a, &b);
	ft_stack_free(&a);
	return (0);
}
