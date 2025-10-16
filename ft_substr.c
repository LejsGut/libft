/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:00:14 by lsalkic           #+#    #+#             */
/*   Updated: 2025/10/16 15:55:35 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		j;
	char	*new_s;
	int		s_len;

	i = 0;
	s_len = ft_strlen(s);
	if (start > s_len)
		return (NULL);
	if (len > s_len - start)
		len = s_len - start;
	while (s[i] < start)
		i++;
	new_s = malloc(len + 1);
	if (!new_s)
		return (NULL);
	while (new_s[j] < len && s[i])
	{
		new_s[j] = s[i];
		i++;
		j++;
	}
	return (new_s);
}
int	main(void)
{
	char	*str;

	str = "noch 3 funktionen";
	printf("ft: %s\n", ft_substr(str, 7, 5));
}
// starten bei start und laufen b