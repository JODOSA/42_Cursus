/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pru_strlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 12:05:18 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/01 12:18:38 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int main()
{
	char mystr[10] = "hola mundo";
	int longitud;

	longitud  = (strlen(mystr));
	printf("%d  es la longitud de mystr.\n", longitud);

	return(0);
}
