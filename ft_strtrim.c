/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:14:12 by lsalkic           #+#    #+#             */
/*   Updated: 2025/10/20 19:37:05 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	amount;

	j = 0;
	amount = 0;
	while (s1[j])
	{
		i = 0;
		while (set[i] && set[i] != s1[j])
			i++;
		if (set[i] == s1[j])
			amount++;
		if (!set[i])
			return (amount);
		j++;
	}
	return (amount);
}

size_t	ft_end(char const *s1, char const *set)
{
	size_t	i;
	size_t	length;
	size_t	bmount;

	bmount = 0;
	length = ft_strlen(s1);
	if (length == 0)
		return (0);
	while (length > 0)
	{
		i = 0;
		while (set[i] && set[i] != s1[length - 1])
			i++;
		if (set[i] == s1[length - 1])
		{
			bmount++;
			length--;
		}
		else
			return (bmount);
	}
	return (bmount);
}
char	*all_together(char const *s1, char const *set)
{
	size_t	all;
	size_t	start;
	size_t	end;
	size_t	new_len;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	all = ft_strlen(s1);
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if (start > all - end)
		new_len = 0;
	else
		new_len = all - (start + end);
	trimmed = malloc(new_len + 1);
	if (!trimmed)
		return (NULL);
	else
		trimmed[new_len] = '\0';
	return (trimmed);
}
size_t	len(char const *s1, char const *set)
{
	size_t	all;
	size_t	start;
	size_t	end;
	size_t	new_len;

	all = ft_strlen(s1);
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if (start > all - end)
		new_len = 0;
	else
		new_len = all - (start + end);
	return (new_len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	as_of;
	size_t	i;
	size_t	new_len;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	trimmed = all_together(s1, set);
	if (!trimmed)
		return (NULL);
	as_of = ft_start(s1, set);
	new_len = len(s1, set);
	while (i < new_len)
	{
		trimmed[i] = s1[as_of + i];
		i++;
	}
	trimmed[new_len] = '\0';
	return (trimmed);
}
