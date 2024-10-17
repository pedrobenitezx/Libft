/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenitez <pbenitez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:23:00 by pbenitez          #+#    #+#             */
/*   Updated: 2024/10/15 14:05:41 by pbenitez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			ch;

	ch = c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == ch)
			return ((char *) s + i);
		i--;
	}
	if (s[0] == ch)
		return ((char *)s + i);
	return (NULL);
}
