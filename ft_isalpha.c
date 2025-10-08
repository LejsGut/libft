/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:58:25 by lsalkic           #+#    #+#             */
/*   Updated: 2025/10/08 16:26:01 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	char	*str;
// int		i;

// 	str = "hello 234234world!";
// 	i = 0;
// 	while (str[i])
// {
// if (ft_isalpha(str[i]))
// 		{
// write(1, &str[i], 1);
// }
// i++;
// }
// write(1, "\n", 1);
// }
