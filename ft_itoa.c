/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:15:41 by lsalkic           #+#    #+#             */
/*   Updated: 2025/10/21 14:55:34 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_amount(int n)
{
	int	count;

	count = 0;
	if (n < 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	count++;
	return (count);
}

static char	*if_n_is_zero(char *new, int n)
{
	(void)n;
	new = malloc(2);
	if (!new)
		return (NULL);
	new[0] = '0';
	new[1] = '\0';
	return (new);
}

static void	if_smaller_zero(int n, char *new)
{
	if (n < 0)
		new[0] = '-';
}

char	*ft_itoa(int n)
{
	char	*new;
	int		i;
	int		last_digit;

	if (n == 0)
		return (if_n_is_zero(NULL, n));
	i = ft_amount(n);
	new = malloc(i);
	if (!new)
		return (NULL);
	if_smaller_zero(n, new);
	new[i - 1] = '\0';
	while (n != 0)
	{
		last_digit = n % 10;
		n = n / 10;
		if (last_digit < 0)
			last_digit = -last_digit;
		new[i - 2] = (char)(last_digit + '0');
		i--;
	}
	return (new);
}

// int	main(void)
// {
// 	printf("Ergebnis ft_itoa %s", ft_itoa(0));
// 	return (0);
// }