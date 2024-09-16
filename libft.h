/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenitez <pbenitez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:46:27 by pbenitez          #+#    #+#             */
/*   Updated: 2024/09/13 19:29:04 by pbenitez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

//libraries
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

//Functions
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *c);
void	*ft_memset(void *b, int c, size_t len);

#endif