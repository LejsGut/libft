/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejs <lejs@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:00:28 by lejs              #+#    #+#             */
/*   Updated: 2025/10/12 11:27:24 by lejs             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    if (n == 0)
        return 0;
    while (s1[i] == s2[i] && i < n && s1[i])
        i++;
    if (s1[i] == s2[i])
        return (0);
    else
        return ((const unsigned char)s1[i] - (const unsigned char)s2[i]);
}
/* loop over both string until we reach n characters */
    /* check if current s1 character is different than
     * current s2 character
     */
         /* if characters are different, return the difference
          * between both characters
          */
      /* if we read both strings until n characters and no difference
       * were found, return 0 as there is no difference
       */