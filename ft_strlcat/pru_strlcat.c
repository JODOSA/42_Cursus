/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pru_strlcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:49:29 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/11 17:09:26 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main()
{
	char dst[12] = "hola";
	char src[6] = " mundo";
	size_t dstsize;

	dstsize = strlcat(dst, src, sizeof(dst));
	
	printf("El tamaño concatenado es %zu\n", dstsize);
	printf("%s\n", dst);

	return (0);
}
