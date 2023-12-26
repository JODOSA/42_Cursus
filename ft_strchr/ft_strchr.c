/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 13:07:58 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/26 19:58:00 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

char    *ft_strchr(const char *s, int c)
{
    char *punts;

    printf("s = %s\n", s);
    printf("c = %d\n", c);

    while (c > 256)
    {
        c = c - 256;
    }
    
    punts = (char *)s;
    while (*punts)
    {
        if (*punts == c)
        {
            return (punts);
        }
        punts++;
    }

    if (c == '\0')
    {
        return (punts);
    }

    return (NULL);

}
int main()
{
    char mystr[] = "tripouille";
    int ch = 't' + 512;
    char *pos;

    pos = ft_strchr(mystr, ch);

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