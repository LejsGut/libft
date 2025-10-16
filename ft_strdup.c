/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:00:45 by lsalkic           #+#    #+#             */
/*   Updated: 2025/10/16 12:35:37 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*strdup(const char *s)
{
	int i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
		i++;
	char *new = (char *)malloc(i + 1);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (s[i])
		new[i] = s[i];
	new[i] = '\0';
	return (new);
}