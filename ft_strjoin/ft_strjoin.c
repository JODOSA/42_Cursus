/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 19:10:52 by joadomin          #+#    #+#             */
/*   Updated: 2024/01/04 19:55:39 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    int len1;
    int len2;
    char    *s3;

    if (!s1 || !s2)
        return (NULL);
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    s3 = malloc(len1 + len2 + 1);
    ft_strlcpy(s3, s1, len1);
    ft_strlcpy(s3 + len1, s2, len2);
    s3[len1 + len2 + 1] = '\0';
    return (s3);
}

int main ()
{
    char str1[] = "Hola ";
    char str2[] = "mundo";
    char *result;

    result = ft_strjoin(str1, str2);

    if (!result)
        printf("Error en la memoria");
    else
        printf("%s\n", result);

    return (0);
}