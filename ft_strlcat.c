/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 18:08:49 by lsalkic           #+#    #+#             */
/*   Updated: 2025/10/18 18:30:59 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	j;
	size_t	f;
	size_t	length_src;
	size_t	length_dest;

	j = 0;
	f = 0;
	length_src = ft_strlen(src);
	length_dest = ft_strlen(dest);
	if (size == 0)
		return (size + length_src);
	if (length_dest >= size)
		return (size + length_src);
	while (dest[j] != '\0')
		j++;
	while (j < size - 1 && f < length_src)
	{
		dest[j] = src[f];
		j++;
		f++;
	}
	dest[j] = '\0';
	return (length_dest + length_src);
}

// size gesamtgroesse von dest