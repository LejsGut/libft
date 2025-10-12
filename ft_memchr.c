/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejs <lejs@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 13:43:28 by lejs              #+#    #+#             */
/*   Updated: 2025/10/12 14:10:22 by lejs             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    const unsigned char *s_new = (const unsigned char *)s;
    unsigned char *c_new = (unsigned char)c;

    i = 0;
    while (i < n)
    {
        if (s_new[i] == c_new)
            return (void *)&s_new[i];
        i++;
    }
    return (NULL);
}
/* as said in the man, the search is done for c converted to
     * an unsigned char, so we have to convert both c and s to 
     * unsigned char
     */
    /* loop over the byte string until our counter is equal to n */
    /* compare the current byte to c */
        /* if they are the same, return the address of this byte as a
         * void *
         */
    /* if we searched n bytes and didn't find what we were looking for
     * return NULL
     */
    /* as you can see, this is very close to the strchr and strrchr
     * functions, so take a look at these before looking at the
     * solution
     */