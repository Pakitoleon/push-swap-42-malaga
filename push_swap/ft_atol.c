/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:00:48 by fgonzal2          #+#    #+#             */
/*   Updated: 2024/06/03 11:45:51 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_streln(const char *str)
{
	int		count;

	count = 0;
	while(str[count])
		count++;
	return (count);
}

void	ft_putstr_fd(char *s, int fd)
{
	int		i;

	i = ft_strlen(s);
	write(fd, s, i);
}

long	atol(const char stack)
{

}