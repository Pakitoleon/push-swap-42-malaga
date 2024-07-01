/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:03:55 by fgonzal2          #+#    #+#             */
/*   Updated: 2024/07/01 13:41:24 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_split(char const *s, char c)
{
	char	**result;
	int		start;
	int		end;
	int		j;

	result = (char **)malloc(sizeof(char *) * (help_split(s, c) + 1));
	if (!result || !s)
		return (0);
	start = 0;
	j = 0;
	while (s[start])
	{
		position_split(s, &start, &end, c);
		if (s[end] == c || end > start)
		{
			result[j] = ft_substr(s, start, end - start);
			if (!result[j])
				return (leak_split(result, j), NULL);
			start = end;
			j++;
		}
	}
	result[j] = NULL;
	return *result;
}

int	help_split(char const *s, char c)
{
	int		i;
	int		count;
	int		b;

	count = 0;
	i = 0;
	b = 0;
	while (s[i])
	{
		if (s[i] != c && b == 0)
		{
			b = 1;
			count++;
		}
		else if (s[i] == c)
			b = 0;
		i++;
	}
	return (count);
}

void	leak_split(char **result, int j)
{
	while (--j >= 0)
		free(result[j]);
	free(result);
}

void	position_split( char const *s, int *start, int *end, char c)
{
	while (s[*start] == c)
		*start += 1;
	*end = *start;
	while (s[*end] && s[*end] != c)
		*end += 1;
}
