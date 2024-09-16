/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenitez <pbenitez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:59:04 by pbenitez          #+#    #+#             */
/*   Updated: 2024/09/13 21:58:29 by pbenitez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	/*declaring temporary pointer*/
	unsigned char	*ptr;

	/*temporary pointer equal to b converted to unsigned char*/
	ptr = (unsigned char *) b;
	/*loop temp pointer while dindn't reach len*/
	while (len > 0)
	{
		/*assing unsigned char value of c to the current byte
		in our temporal pointer*/
		*(ptr++) = (unsigned char) c;
		/*reducing the len by one we only set len bytes*/
		len--;
	}
	/*return the function first parameter, void *b */
	return (0);
}