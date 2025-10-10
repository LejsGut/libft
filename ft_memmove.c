/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 16:12:47 by lsalkic           #+#    #+#             */
/*   Updated: 2025/10/10 16:48:54 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*memmove(void *dest, const void *src, size_t n)
{
	int i;
	unsigned char temp_arr;

	i = 0;
	while (i < n)
	{
		((unsigned char *)temp_arr)[i] = ((unsigned char *)src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)temp_arr)[i] i++;
	}

	return (dest);
}