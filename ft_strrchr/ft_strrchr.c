/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 07:23:22 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/27 09:09:16 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

char    *ft_strrchr(const char *s, int c)
{
    char *punts;
    char *endpunts=NULL;

    printf("s = %s\n", s);
    printf("c = %d\n", c);

    while (c >= 256)
    {
        c = c - 256;
    }
    if (c == 0)
    {
        c = '\0';
    }
    
    punts = (char *)s;
    while (*punts)
    {
        if (*punts == c)
        {
            endpunts = punts;
        }
        punts++;
    }
    if (c == '\0')
    {
        return (punts);
    }
    if (*punts == '\0')
    {
        return (endpunts);
    }

    return (NULL);
}
int main()
{
    char mystr[] = "bonjour";
    int ch = 's';
    char *pos;

    pos = ft_strrchr(mystr, ch);

    printf("pos = %s\n", pos);

    if (pos != NULL)
    {
        printf("La posición del carácter %c, es %ld\n", ch, pos - mystr);
    }
    else
    {
        printf("Carácter no encontrado\n");
    }

    return (0);
}