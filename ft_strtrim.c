/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:14:12 by lsalkic           #+#    #+#             */
/*   Updated: 2025/10/20 18:52:56 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strtrim(char const *s1, char const *set)
{
	int	i;

	i = 0;
}

int	ft_start(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	amount;

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
	return (0);
}

int	ft_end(char const *s1, char const *set)
{
	int	i;
	int	length;
	int	bmount;

	bmount = 0;
	length = ft_strlen(s1) - 1;
	if (length < 0)
		return (0);
	while (length >= 0)
	{
		i = 0;
		while (set[i] && set[i] != s1[length])
			i++;
		if (set[i] == s1[length])
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

	all = ft_strlen(s1);
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if ((start + end) > all)
		return (new_len = 0);
	else
		new_len = all - (start + end);
	trimmed = malloc(new_len + 1);
	if (!trimmed)
		return (NULL);
	else
		trimmed[new_len] = '\0';
	return (trimmed);
}
