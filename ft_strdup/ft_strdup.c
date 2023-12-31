/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 18:12:36 by joadomin          #+#    #+#             */
/*   Updated: 2024/01/04 11:55:35 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char    *ft_strdup(const char *s)
{
    int size;
    char *mem;

    //size = strlen(s);
    size = ft_strlen(s);
    mem = malloc(size + 1);
    if (mem == NULL)
    {
        return (NULL);
    }
    //strcpy(mem, s);
    ft_strlcpy(mem, s, mem);
    return (mem); 
}

int main ()
{
    char str[] = "Hola mundo";
    char *pstr;
    char *result;

    pstr = str;
    result = ft_strdup(pstr);

    printf("%s\n", result);

    free (result);
    return (0);
}