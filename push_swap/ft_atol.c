/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:00:48 by fgonzal2          #+#    #+#             */
/*   Updated: 2024/06/10 12:39:59 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_streln(const char *str)
{
	int		count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

void	ft_putstr_fd(char *s, int fd)
{
	int		i;

	i = ft_strlen(s);
	write(fd, s, i);
}

long	ft_atol(const char *str)
{
	long	i;
	long	negative;
	long	result;
	int		j;

	i = 0;
	negative = 0;
	result = 0;
	while (str[i] == ' ' || (str[i] <= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative = -1;
		i++;
	}
	j = i;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (str[i] || j == i)
		ft_print_error();
	return (result * negative);
}
