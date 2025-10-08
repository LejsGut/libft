/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:17:05 by lsalkic           #+#    #+#             */
/*   Updated: 2025/10/08 20:10:08 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	int				i;
	unsigned char	*temp_s;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
	return (s);
}
