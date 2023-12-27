/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 11:15:06 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/27 22:28:06 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    
    int dif;
    int i;
    
    dif = 0;
    i = 0;
 
    while (s1[i] != '\0' && s2[i] != '\0' && dif == 0 && i < n )
    {        
        dif = s1[i] - s2[i];
        i++;
    }
    if (dif == 0 && i < n)
        dif = s1[i] - s2[i];
    return (dif);

}
int main()
{
    char str1[] = "omg1||||||||";
    char str2[] = "omg3";
    size_t n = 4;
    int result;

    result = ft_strncmp(str1, str2, n);

    printf("result = %d\n", result);

    return(0);
}