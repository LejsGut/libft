/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 20:25:51 by lsalkic           #+#    #+#             */
/*   Updated: 2025/10/17 17:16:14 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdbool.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	ft_memcpy(void *dest, const void *src, size_t n);
void	ft_bzero(void *s, size_t n);
char	*ft_strdup(const char *s);
#endif