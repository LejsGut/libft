/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:14:12 by lsalkic           #+#    #+#             */
/*   Updated: 2025/10/17 17:38:20 by lsalkic          ###   ########.fr       */
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

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		count;
	char	*new_s;
	int		copy_i;

	i = 0;
	count = 0;
	while (is_in_set(s1[i++], set))
		count++;
	copy_i = i;
	while (s1[i])
		i++;
	while (is_in_set(s1[i--], set))
		count++;
	new_s = malloc(ft_strlen(s1) - count + 1);
	i = 0;
	while (s1[copy_i] < ft_strlen(s1))
	{
		new_s[i] = s1[copy_i];
		i++;
		copy_i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
