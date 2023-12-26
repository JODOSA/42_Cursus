/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pru_strchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:57:36 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/22 14:20:02 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int main()
{
	char s[] = "Holo Mundo grijnder";
	char *pos = strchr(s, 00);

	if (pos != NULL)
	{
		printf("La primera 'a' se encuentra en la posición: %ld\n", pos - s);
	}
	else
	{
		printf("La letra 'a' no se encuentra en la cadena.\n");
	}

	return (0);
}
