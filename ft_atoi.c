/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:14:11 by lsalkic           #+#    #+#             */
/*   Updated: 2025/10/14 19:48:16 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	digit;
	int	number;

	i = 0;
	number = 0;
	while (nptr[i])
	{
		while (nptr[i] <= ' ') // waehrend nptr[i] whitespace ist ueberspring
			return (0);
		if ((nptr[i] == '-' || nptr[i] == '+') && !(nptr[i++] >= '0'
				&& nptr[i++] <= '9') || !(nptr[i] >= '0' && nptr[i] <= '9'))
			return (0);
		while (nptr[i] >= '0' && nptr[i] <= '9')
		{
			digit = nptr[i] - '0';
			number = number * 10 + digit;
		}
		i++;
	}
}

// uebersrpingt whitespace danach entweder + oder - sonst tot
