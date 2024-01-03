/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 09:07:01 by joadomin          #+#    #+#             */
/*   Updated: 2024/01/03 18:03:24 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void    *ft_calloc(size_t num_items, size_t size)
{
    void *mem;

    mem = malloc(num_items * size);
    if (!mem)
    {
        return (NULL);
    }
    else
    {
        ft_bzero(mem, (num_items * size));
        //bzero(mem, (num_items * size));
        return (mem);
    }
}

int main ()
{
    void *result;
    int items;
    int i;

    items = 10;
    i = 0;
    result = ft_calloc(items, sizeof(int));

    while (i < items)
    {
        printf("%d, ", *(int *)result);
        i++;
    }
    free (result);
    return (0);
}