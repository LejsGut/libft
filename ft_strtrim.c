/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:14:12 by lsalkic           #+#    #+#             */
/*   Updated: 2025/10/18 19:51:28 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	is_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (true);
		i++;
	}
	return (false);
}

int	cut_away(char const *s1, char const *set)
{
	int	i;
	int	count;
	int	copy_i;

	count = 0;
	i = 0;
	while (s1[i] && is_in_set(s1[i++], set))
	{
		count++;
		i++;
	}
	copy_i = i;
	while (s1[i])
		i++;
	i--;
	while (i >= copy_i && is_in_set(s1[i], set))
	{
		count++;
		i--;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		count;
	char	*new_s;
	int		copy_i;

	i = 0;
	count = 0;
	if (!s1 || !set)
		return (NULL);
	count = cut_away(s1, set);
	new_s = malloc(ft_strlen(s1) - count + 1);
	if (!new_s)
		return (NULL);
	i = 0;
	while (copy_i < (int)ft_strlen(s1) - (count - (copy_i)))
	{
		new_s[i] = s1[copy_i];
		i++;
		copy_i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
