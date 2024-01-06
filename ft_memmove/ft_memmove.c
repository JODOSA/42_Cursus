/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 18:38:14 by joadomin          #+#    #+#             */
/*   Updated: 2024/01/06 19:23:20 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void    *memmove(void *dest, const void *src, size_t n)
{
    unsigned char           *pdest;
    unsigned const char     *psrc;

    pdest = (unsigned char *)dest;
    psrc = (unsigned const char *)src;
    if (dest < src)
        return (ft_memcpy(dest, src, n));
    if (!n || dest == src)
        return (dest);
    while (n--)
        pdest[n] = psrc[n];        
    return (dest);
}

int main()
{
    char mysrc[] = "aaaaaaaaaaaaaa";
    char mydest[] = "1234567890";
    char *result;

    result = memmove(mydest, mysrc, 11);

    printf("%s\n", result);

    return (0);
}