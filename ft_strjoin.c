/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:11:05 by lsalkic           #+#    #+#             */
/*   Updated: 2025/10/18 16:08:30 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*new_s;
	int		lenght_s1;
	int		length_s2;

	j = 0;
	i = 0;
	if (!s1 || !s2)
		return (ft_strdup(""));
	lenght_s1 = ft_strlen(s1);
	length_s2 = ft_strlen(s2);
	new_s = malloc(lenght_s1 + length_s2 + 1);
	if (!new_s)
		return (NULL);
	while (s1[i])
	{
		new_s[i] = s1[i];
		i++;
	}
	while (s2[j])
		new_s[i++] = s2[j++];
	new_s[i] = '\0';
	return (new_s);
}
// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	char	*result;

// 	s1 = ft_strdup("test");
// 	s2 = ft_strdup("test2");
// 	result = NULL;
// 	printf("%s %s %p", s1, s2, result);
// 	result = ft_strjoin(s1, s2);
// 	printf("%s\n", result);
// 	free(result);
// 	free(s1);
// 	free(s2);
// }
