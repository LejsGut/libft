/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 11:24:23 by lejs              #+#    #+#             */
/*   Updated: 2025/10/18 16:08:56 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	while (i < len && haystack[i])
	{
		j = 0;
		while (i + j < len && needle[j] && haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
// Wenn needle leer ist → sofort haystack zurückgeben.

// Wenn len == 0 → nichts durchsuchen, NULL zurückgeben.

// Iteriere über haystack (mit Index i oder Pointer):

// Solange i < len und haystack[i] nicht '\0'.

// Prüfe ab dieser Position (j-Zähler), ob needle passt:

// Zeichenweise vergleichen, solange

// haystack[i + j] == needle[j]

// und i + j < len.

// Wenn needle[j] == '\0' → Treffer → &haystack[i] zurückgeben.

// Wenn kein Treffer gefunden → NULL.