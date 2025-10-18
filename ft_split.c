/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:41:38 by lsalkic           #+#    #+#             */
/*   Updated: 2025/10/18 19:00:32 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int	i;

	i = 0;
	if (s == 0)
		return (NULL);
}

char	*in_a_word(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
	}
	return (&s[i]);
}
