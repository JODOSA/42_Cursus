/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:15:06 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/18 23:29:31 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int		i;

	i = 0;
	while (dstsize == 0)
	{
		return (ft_strlen(src));
	}	
	while (i <= dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}
int main ()
{
	size_t size;
	char dst[3];
	char src[11] = "Hola ";

	printf("dst antes: %s\n", dst);
	printf("src antes: %s y tamaño: %ld\n", src, ft_strlen(src));

	size = ft_strlcpy(dst, src, sizeof(dst));

	printf("dst despues: %s\n", dst);
	printf("El tamaño copiado es %zu\n", size);

	return (0);
}
