/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 08:25:00 by joadomin          #+#    #+#             */
/*   Updated: 2024/01/04 18:14:06 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *psub;
    char *presult;
    int len_s;
    int j;

    //len_s = ft_strlen(s);
    len_s = strlen(s);
    if (len_s < len || len_s < (start + len))
        return (0);
    psub = malloc(len + 1);
    presult = psub;
    j = 0;
    while (j < len)
    {
        presult[j] = s[start];
        start++;
        j++;
    }
    presult[j+1] = '\0';
    return (psub);
}

int main ()
{
    char str[] = "lorem ipsu delamore har";
    char *pstr;

    pstr = ft_substr(str, 0, 10);

    if (pstr == 0)
        printf("Parámetros incorrectos\n");
    else
        printf("%s\n", pstr);

    free (pstr);
    return (0);
}