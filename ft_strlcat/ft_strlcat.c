/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:29:24 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/11 08:29:24 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t sr;
    size_t ds;
    int i;


    i = 0;
    ds = ft_strlen(dst);
    sr = ft_strlen(src);

    printf("dstsize %zu\n", dstsize);
    printf("ds %zu\n", ds);
    printf("sr %zu\n", sr);

    if (dstsize <= ds)
        return(sr + dstsize);
     while(src[i] != '\0'){
        dst[ds] = src[i];
        ds++;
        i++; 
    }
    dst[ds] = '\0';

    return (ds);
}
int main(){

    char dst[] = "Hola";
    const char src[] = "Mundo Cruel";
    size_t size;
    size_t dstsize = (sizeof(dst));
    size = ft_strlcat(dst, src, dstsize);

    printf("%s\n", dst);
    printf("Tamaño copiado %zu\n", size);
    return (0);
}