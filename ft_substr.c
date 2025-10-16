/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:00:14 by lsalkic           #+#    #+#             */
/*   Updated: 2025/10/16 16:47:14 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*new_s;
	int		s_len;
	int		j;

	i = 0;
	j = 0;
	s_len = ft_strlen(s);
	if (start >= s_len || len == 0)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	while (i < start)
		i++;
	new_s = malloc(len + 1);
	if (!new_s)
		return (NULL);
	while (j < len)
	{
		new_s[j] = s[start + j];
		j++;
	}
	new_s[j] = '\0';
	return (new_s);
}
// int	main(void)
// {
// 	char	*str;

// 	str = "hallo ich will heim";
// 	printf("ft: %s\n", ft_substr(str, 7, 5));
// }
// starten bei start und laufen b