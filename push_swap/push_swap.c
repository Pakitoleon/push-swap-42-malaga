/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:32:21 by @fgonzal2         #+#    #+#             */
/*   Updated: 2024/07/01 14:13:26 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	**nbr;

	a = NULL;
	b = NULL;
	nbr = 0;
	if (argc > 1)
		process_in(argc, argv, nbr, &a);
	if (!stack_is_sorted(a))
		sort_stack(&a, &b);
	ft_stack_free(&a);
	return (0);
}
