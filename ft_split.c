/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:41:38 by lsalkic           #+#    #+#             */
/*   Updated: 2025/10/19 10:57:40 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	nbr_words(char const *s, char c)
{
	size_t	i;
	size_t	word_count;

	i = 0;
	word_count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
		}
		if (i > 0 && s[i - 1] != c)
		{
			word_count++;
		}
	}
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	size_t	word;
	char	**words;

	if (s == NULL)
		return (NULL);
	word = nbr_words(s, c);
	words = malloc(word + 1 * sizeof *words);
	if (!words)
		return (NULL);
	words[word] = NULL;
}

// count the words
// allocate memory for array of string
// copy words in correct position

int	fill(char **words, char const *s, char c)
{
	int i;
	int length;
	int j;

	i = 0;
	j = 0;
	while (s[i])
	{
		length = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			length++;
		}
		if (length > 0)
		{
			if (new_malloc(words, i, len + 1))
			{
				return (1);
			}
		}
	}
}