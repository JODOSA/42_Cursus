/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 10:00:55 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/28 12:35:29 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    unsigned char *str;
    unsigned char ch;

    str = (unsigned char *)s;
    ch = (unsigned char)c;
    i = 0;
    while (i < n)
    {
        if (str[i] == ch)
        {
            return (&str[i]);
        }
        i++;
    }
    return (NULL);
}
int main()
{
    int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
    printf("%s\n", (char *)ft_memchr(tab, -1, 7));
    /*char mystr[] = "bonjourno";
    char charac = 'n';
    char *found;

    found = ft_memchr(mystr, charac, 2);

    if (found != NULL)
    {
        printf("Carácter encontrado: %c\n", *found);
    }
    else
    {
        printf("Carácter no encontrado.\n");
    }*/

    return (0);
}