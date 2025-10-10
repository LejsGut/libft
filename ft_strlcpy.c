/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 17:57:28 by lsalkic           #+#    #+#             */
/*   Updated: 2025/10/10 18:07:11 by lsalkic          ###   ########.fr       */
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

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t j;

	j = 0;
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	while (j < size - 1 && src[j])
	{
		dest[j] = ((const unsigned char *)src)[j];
		j++;
	}
	dest[j] = 0;
	return (ft_strlen(src));
}