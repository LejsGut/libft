/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 14:19:05 by lejs              #+#    #+#             */
/*   Updated: 2025/10/14 16:06:24 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*S1;
	const unsigned char	*S2;

	S1 = (const unsigned char *)s1;
	S2 = (const unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (S2[i] != S1[i])
			return (S1[i] - S2[i]);
		i++;
	}
	return (0);
}
