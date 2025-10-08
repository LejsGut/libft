/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:18:52 by lsalkic           #+#    #+#             */
/*   Updated: 2025/10/08 17:45:33 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(char c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
		return (0);
}

// int	main(void)
// {
// 	char	*str;
// 	int		i;

// 	i = 0;
// 	str = "";
// 	while (str[i])
// 	{
// 		if (ft_isascii(str[i]))
// 		{
// 			printf("1");
// 		}
// 		else
// 			printf("0");
// 		i++;
// 	}
// }
