/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 18:12:36 by joadomin          #+#    #+#             */
/*   Updated: 2024/01/03 18:26:15 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strdup(const char *s)
{
    int size;
    char *mem;

    size = strlen(s);
    mem = malloc(size + 1);
    if (mem == NULL)
    {
        return (NULL);
    }
    strcpy(mem, s);
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