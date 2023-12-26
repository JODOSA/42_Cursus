/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pru_strlcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:51:40 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/07 13:11:53 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main()
{
	size_t size;
	char dst[11];
	char src[11] = "Hola";

	size = strlcpy(dst, src, sizeof(dst));

	printf("El tamaño copiado es %zu\n", size);

	return (0);
}
