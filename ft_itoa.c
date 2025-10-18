/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:15:41 by lsalkic           #+#    #+#             */
/*   Updated: 2025/10/18 13:19:43 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_amount(int n)
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
char	*if_n_is_zero(char *new, int n)
{
	new = malloc(2);
	new = malloc(ft_amount(n));
	if (!new)
		return (NULL);
	new[0] = '0';
	new[1] = '\0';
	return (new);
}
void	if_smaller_zero(int n, char *new)
{
	int	i;

	i = 0;
	if (n < 0)
		new[i] = '-';
}

char	*ft_itoa(int n)
{
	char	*new;
	int		i;
	int		last_digit;

	i = ft_amount(n);
	if (n == 0)
		return (if_n_is_zero(new, n));
	new = malloc(ft_amount(n));
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
		new[i - 2] = last_digit + '0';
		i--;
	}
	return (new);
}
#include <limits.h>

int	main(void)
{
	printf("Ergebnis ft_itoa %s", ft_itoa(0));
	return (0);
}