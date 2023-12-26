/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 07:53:02 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/18 13:11:13 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

void    *ft_memcpy(void *dst, const void *src, size_t len){

    unsigned const char *sr;
    unsigned char *ds;
    int i;

    sr = src;
    ds = dst;
    i = 0;

	while(ds == sr || !len)
	{
		return (dst);
	}

	while(i < len){

        ds[i] = sr[i];
        i++;
    }

    return (dst);

}
int main(){

    char source[14] = "Hola mundo!!!";
    char destination[20] = "ppppppppppppppppp";
    char *dst = destination;

    printf("source = %s\n", source);
    printf("destination = %s\n", destination);

    // dst = ft_memcpy(destination, source, 13);
	dst = ft_memcpy(((void *)0), ((void *)0),3);

    printf("source =  %s\n", source);
    printf("destination = %s\n", destination);

    printf("dst: %s\n", dst);

    return(0);
}
