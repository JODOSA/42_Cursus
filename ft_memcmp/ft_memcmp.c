/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 18:35:27 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/28 19:23:39 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    int diff;
    const unsigned char   *ps1;
    const unsigned char   *ps2;

    ps1 = s1;
    ps2 = s2;
    i = 0;
    diff = 0;
    while (i < n)
    {
        if (ps1[i] != ps2[i])
        {
            diff = ps1[i] - ps2[i];
            return (diff);
        }
        i++;
    }
    if (diff == 0 && i >=n)
    {
        return (diff);
    }
}
int main ()
{
    char str1[] = "hello";
    char str2[] = "hella";
    int result;

    result = ft_memcmp(str1, str2, 5);

    printf("result = %d\n", result);

    return (0);
}