/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:56:15 by fgonzal2          #+#    #+#             */
/*   Updated: 2024/06/03 17:32:21 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(char *s1)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
		return (NULL);
	while (s1[j])
	{
		dest[j] = s1[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*substr;
	unsigned int	s_len;

	if (!s)
		return (NULL);
	s_len = (unsigned int)ft_strlen((char *)s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (start + len > s_len)
		len = s_len - start;
	substr = (char *)malloc(sizeof(char) * len + 1);
	if (!substr)
		return (NULL);
	i = -1;
	while (++i < (unsigned int)len)
		substr[i] = s[start + i];
	substr[i] = '\0';
	return (substr);
}

static int	help_split(char const *s, char c)
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

static void	leak_split(char **result, int j)
{
	while (--j >= 0)
		free(result[j]);
	free(result);
}

static void position( char const *s, int *start, int *end, char c)
{
	while (s[*start] == c)
		*start += 1;
	*end = *start;
	while (s[*end] && s[*end] != c)
		*end += 1;
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		start;
	int		end;
	int		j;
	result = (char **)malloc(sizeof(char *) * (help_split(s, c) + 1));
	if (!result || !s)
		return (NULL);
	start = 0;
	j = 0;
	while (s[start])
	{
		position(s, &start, &end, c);
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
	return (result);
}