/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:19:48 by lsalkic           #+#    #+#             */
/*   Updated: 2025/10/18 21:18:28 by lsalkic          ###   ########.fr       */
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

static void	if_smaller_zero(int n, char *new)
{
	int	i;

	i = 0;
	if (n < 0)
		new[i] = '-';
}

void	ft_putnbr_fd(int n, int fd)
{
	char	new[12];
	int		i;
	int		last_digit;

	i = ft_amount(n);
	if (n == 0)
		write(fd, "0", 1);
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
	ft_putstr_fd(new, fd);
}
