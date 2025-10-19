/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:41:38 by lsalkic           #+#    #+#             */
/*   Updated: 2025/10/19 11:50:20 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	new_malloc(char **words, int i, int length)
{
	int	p;

	p = 0;
	words[i] = malloc(length);
	if (words[i] == NULL)
	{
		while (p < i)
		{
			free(words[p++]);
		}
		free(words);
		return (1);
	}
	return (0);
}

int	fill(char **words, char const *s, char c)
{
	int	i;
	int	length;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		length = 0;
		while (*s && *s == c)
			++s;
		while (*s && *s != c)
		{
			++s;
			++length;
		}
		if (length > 0)
		{
			if (new_malloc(words, i, length + 1))
				return (1);
		}
		ft_strlcpy(words[j], s - length, length + 1);
		j++;
	}
	return (0);
}

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
			i++;
		if (i > 0 && s[i - 1] != c)
			word_count++;
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
	words = malloc(word + 1 * sizeof(*words));
	if (!words)
		return (NULL);
	words[word] = NULL;
	if (fill(words, s, c))
		return (NULL);
	return (words);
}

int	main(void)
{
	char *s = "---hello---world---how-------are--you-";

	char **v = ft_split(s, '-');
	while (*v)
	{
		printf("%s\n", *v++);
	}
}