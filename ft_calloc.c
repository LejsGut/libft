/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:55:35 by lsalkic           #+#    #+#             */
/*   Updated: 2025/10/18 16:05:01 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*memory;

	if (nmemb > SIZE_MAX / size)
		return (0);
	memory = malloc(nmemb * size);
	if (memory == 0)
		return (NULL);
	ft_bzero(memory, nmemb * size);
	return (memory);
}
