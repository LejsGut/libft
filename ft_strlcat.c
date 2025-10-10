/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 18:08:49 by lsalkic           #+#    #+#             */
/*   Updated: 2025/10/10 18:24:44 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t j;

	j = 0;
	if (dest > size)
	{
		return (ft_strlen(dest) + ft_strlen(src))
	}
	while (j < size)
	{
	}
}