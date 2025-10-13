/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejs <lejs@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 17:57:28 by lsalkic           #+#    #+#             */
/*   Updated: 2025/10/13 19:17:15 by lejs             ###   ########.fr       */
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
	size_t  len_src;
	size_t i;
	
	len_src = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (len_src);
	if (size > len_src) //if size has more space than src
	{
		while (src[i]) 
		{
			dest[i] = src[i]; // copy src to dest
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
