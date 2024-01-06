/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 08:25:00 by joadomin          #+#    #+#             */
/*   Updated: 2024/01/06 12:44:04 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    //char *psub;
    char *presult;
    int len_s;
    int j;

    //len_s = ft_strlen(s);
    len_s = strlen(s);
    if (!s || (!(presult = malloc(len + 1))))
        return (NULL);
    
    if (start > len_s)
        return (strdup(""));
    //psub = malloc(len + 1);
    //presult = psub;
    j = 0;
    while (j < len)
    {
        presult[j] = s[start];
        start++;
        j++;
    }
    presult[j+1] = '\0';
    return (presult);
}

int main ()
{
    char str[] = "lorem ipsu delamore har";
    char *pstr;

    pstr = ft_substr(str, 7, 10);

    if (pstr == 0)
        printf("Parámetros incorrectos\n");
    else
        printf("%s\n", pstr);

    free (pstr);
    return (0);
}