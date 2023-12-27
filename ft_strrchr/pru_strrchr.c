/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pru_strrchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 07:20:09 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/27 07:22:30 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int main()
{
	char s[] = "tritotilte";
	char *pos = strrchr(s, 't');

	printf("pos = %s\n", pos);

	if (pos != NULL)
	{
		printf("La última coincidencia se encuentra en la posición: %ld\n", pos - s);
	}
	else
	{
		printf("La letra no se encuentra en la cadena.\n");
	}

	return (0);
}