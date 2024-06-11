/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:32:30 by fgonzal2          #+#    #+#             */
/*   Updated: 2024/06/10 12:49:38 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit("Exit_Error");
}

int	mx(int x, int y)
{
	if (x >= y)
		return (x);
	return (y);
}
