/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenitez <pbenitez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 22:04:10 by pbenitez          #+#    #+#             */
/*   Updated: 2024/09/16 13:17:07 by pbenitez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	//declaring temporal pointer
	char	*ptr;

	//temporal pointer equal to b converted to char *
	ptr = (char *) s;
	//loop in temporal pointer while we didn't reach n
	while (n > 0)
	{
		//0 to the current byte in temporal pointer
		*(ptr++) = 0;
		//reducing n by one to set only n bytes to 0
		n--;
	}
}