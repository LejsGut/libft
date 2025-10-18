/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:28:36 by lsalkic           #+#    #+#             */
/*   Updated: 2025/10/18 16:07:12 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	char	*str;
// 	int		i;

// 	str = "a010fde02";
// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		if (ft_isdigit(str[i]))
// 		{
// 			printf("1");
// 		}
// 		else
// 		{
// 			printf("0");
// 		}
// 		i++;
// 	}
// }
