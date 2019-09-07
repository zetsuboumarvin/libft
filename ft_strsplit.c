/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 13:24:57 by jflorent          #+#    #+#             */
/*   Updated: 2019/09/07 13:25:00 by jflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int		words;

	words = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
			words++;
		while (*s != c && *s)
			s++;
	}
	return (words);
}

static char	*create_word(char const *s, char c)
{
	char	*word;
	int		len;
	char	*temp;

	temp = (char*)s;
	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	word = (char*)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_strncpy(word, temp, len);
	word[len] = '\0';
	return (word);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	char	**arr;
	int		j;

	i = 0;
	j = 0;
	arr = (char**)malloc(sizeof(char*) * (count_words(s, c) + 1));
	if (!arr)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			arr[j] = create_word(&s[i], c);
			if (arr[j] == NULL)
				return (NULL);
			j++;
		}
		while (s[i] != c && s[i])
			i++;
	}
	arr[j] = NULL;
	return (arr);
}
