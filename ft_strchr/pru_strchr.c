/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pru_strchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:57:36 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/26 19:57:19 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int main()
{
	char s[] = "tripouille";
	char *pos = strchr(s, 't' + 256);

	printf("pos = %s\n", pos);

	if (pos != NULL)
	{
		printf("La primera se encuentra en la posición: %ld\n", pos - s);
	}
	else
	{
		printf("La letra no se encuentra en la cadena.\n");
	}

	return (0);
}
