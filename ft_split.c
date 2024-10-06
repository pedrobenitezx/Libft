/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenitez <pbenitez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 13:54:23 by pbenitez          #+#    #+#             */
/*   Updated: 2024/09/29 14:00:34 by pbenitez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(const char *s, char c)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	while (s[i] != '\0')
	{
		if (s[i++] != c && (s[i] == c || s[i] == '\0'))
			x++;
	}
	return (x);
}

static void	ft_free_all(char **strs, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	len = 0;
	size_t	n = 0;

	if (!s || !(strs = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1))))
		return (NULL);

	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (s[len] && s[len] != c)
				len++;
			strs[n] = ft_substr(s, 0, len);
			if (!strs[n++])
			{
				ft_free_all(strs, n - 1);
				return (NULL);
			}
			s += len;
		}
		else
			s++;
	}
	strs[n] = NULL;
	return (strs);
}
