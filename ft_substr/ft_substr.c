/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 08:25:00 by joadomin          #+#    #+#             */
/*   Updated: 2024/01/08 08:57:29 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *presult;
    int len_s;
    int j;

    //len_s = ft_strlen(s);
    len_s = strlen(s);
    presult = malloc(len + 1);
    //if (!s || (!(presult = malloc(len + 1))))
    if (!s || !presult)
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
    //presult[j+1] = '\0';
    return (presult);
}

int main ()
{
    char str[] = "hola";
    char *pstr;

    pstr = ft_substr(str, 14294967295, 0);

    if (pstr == 0)
        printf("Parámetros incorrectos\n");
    else
        printf("%s\n", pstr);

    free (pstr);
    return (0);
}