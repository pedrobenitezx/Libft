/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenitez <pbenitez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:47:31 by pbenitez          #+#    #+#             */
/*   Updated: 2024/10/14 16:22:59 by pbenitez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	if (!dst && !src)
		return (dst);
	if (dst > src)
	{
		while (len--)
		{
			d[len] = s[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
