/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 13:43:28 by lejs              #+#    #+#             */
/*   Updated: 2025/10/18 17:40:20 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*s_new = (const unsigned char *)s;
	unsigned char		c_new;

	c_new = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s_new[i] == c_new)
			return ((void *)&s_new[i]);
		i++;
	}
	return (NULL);
}
