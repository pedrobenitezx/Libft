/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenitez <pbenitez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:47:31 by pbenitez          #+#    #+#             */
/*   Updated: 2024/09/18 11:20:01 by pbenitez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp_dest;
	char	*tmp_src;
	size_t	i;

	if (!dest || !src)
		return (NULL);
	tmp_dest = (char *) dest;
	tmp_src = (char *) src;
	i = 0;
	if (tmp_dest > tmp_src)
		while (n-- > 0)
			tmp_dest[n] = tmp_src[n];
	else
	{
		while (i < n)
		{
			tmp_dest[i] = tmp_src[i];
			i++;
		}
	}
	return (dest);
}
