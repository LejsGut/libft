/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejs <lejs@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 16:12:47 by lsalkic           #+#    #+#             */
/*   Updated: 2025/10/13 20:04:59 by lejs             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char *s;
	unsigned char *d;
	
	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	if (n == 0 || dest == src)
		return (dest);
	if (d < s)
	{
		for (size_t i = 0; i < n; i++)
			d[i] = s[i];
	}
	else
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	return (dest);
}
