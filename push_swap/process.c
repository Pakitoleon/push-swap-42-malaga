/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:35:11 by fgonzal2          #+#    #+#             */
/*   Updated: 2024/07/01 14:13:23 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_input(char **nbr)
{
	int	i;
	int	j;

	i = 0;
	while (nbr[i])
	{
		j = i + 1;
		ft_atol(nbr[i]);
		while (nbr[j])
		{
			if (ft_atol(nbr[i]) == ft_atol(nbr[j]))
				ft_print_error();
			j++;
		}
		i++;
	}
}

void	process_in(int argc, char **argv, t_stack **a, char **nbr)
{
	if (argc == 2)
	{
		if (!argv[1][0] || ((argv[1][0] == '+'
				|| argv[1][0] == '-') && !argv[1][1]))
			ft_print_error();
		*nbr = ft_split(argv[1], ' ');
		if (!nbr)
			return;
	}
	else
			*nbr = *(argv + 1);
		check_input(nbr);
		stack_init(a, nbr);
			if (argc == 2)
		free_array(nbr);
}
