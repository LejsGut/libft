/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejs <lejs@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 16:12:47 by lsalkic           #+#    #+#             */
/*   Updated: 2025/10/12 16:52:41 by lejs             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t  i;
	size_t	j;
	const unsigned char	*s = (const unsigned char *)src;
	unsigned char *d = (unsigned char *)dest;
	
	if (d == s || n == 0)
		return (dest);
	
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[j];
			i++;
			j++;
		}		
	}
	if (d > s)
	{
		
	}
	
	
	return (dest);
}
