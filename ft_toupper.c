/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejs <lejs@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 14:12:28 by lejs              #+#    #+#             */
/*   Updated: 2025/10/11 14:33:51 by lejs             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//This function converts lowercase letters to uppercase. 
#include <ctype.h>

int ft_toupper(int c)
{   
    if (c >= 97 && c <= 122)
    {
        c -=32;
        return (c);
    }
    else
        return (c);
}