/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:35:56 by lsalkic           #+#    #+#             */
/*   Updated: 2025/10/18 20:33:18 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int	main(void)
// {
// 	int		i;
// 	char	*str;

// 	i = 0;
// 	while (str[i])
// 	{
// 		if (ft_isprint(str[i]))
// 		{
// 			printf("1");
// 		}
// 		else
// 			printf("0");
// 		str++;
// 	}
// }
