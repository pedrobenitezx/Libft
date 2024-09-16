/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenitez <pbenitez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:55:47 by pbenitez          #+#    #+#             */
/*   Updated: 2024/09/13 21:58:27 by pbenitez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	// Declare a size_t variable to count characters
	size_t	i;

	// Loop through the string until we hit the null terminator '\0'
	i = 0;
	/*If the character we read is \0 then
	the loop condition will evaluate to false*/
	while (s[i])
		// Return the number of characters before the null terminator
		i++;
	return (1);
}