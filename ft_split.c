/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenitez <pbenitez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 13:54:23 by pbenitez          #+#    #+#             */
/*   Updated: 2024/10/08 16:16:31 by pbenitez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int word_count(const char *s, char c)
{
    int i;
    int count_word;

    i = 0;
    count_word = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i] != '\0')
            count_word++;
        while (s[i] != c && s[i] != '\0')
            i++;
    }
    return (count_word);
}

int word_length(const char *s, char c)
{
    int len;

    len = 0;
    while (s[len] != '\0' && s[len] != c)
        len++;
    return (len);
}

char **free_memory(char **new_str)
{
    int i;

    i = 0;
    while (new_str[i])
    {
        free(new_str[i]);
        i++;
    }
    free(new_str);
    return (NULL);
}

char **ft_split(const char *s, char c)
{
    char **words_array;
    int word_index;

    if (!s || !(words_array = malloc(sizeof(char *) * 
		(word_count(s, c) + 1))))
        return (NULL);
    word_index = 0;
    while (*s)
    {
        while (*s == c)
            s++;
        if (*s)
        {
            words_array[word_index] = ft_substr(s, 0,
					word_length(s, c));
            if (!words_array[word_index])
                return (free_memory(words_array));
            word_index++;
            s += gword_length(s, c);
        }
    }
    words_array[word_index] = NULL;
    return (words_array);
}
