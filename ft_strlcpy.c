/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 17:57:28 by lsalkic           #+#    #+#             */
/*   Updated: 2025/10/18 18:41:15 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len_src;
	size_t	i;

	len_src = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (len_src);
	if (size > len_src)
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
	}
	else
	{
		while (size - 1 > i)
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (len_src);
}
