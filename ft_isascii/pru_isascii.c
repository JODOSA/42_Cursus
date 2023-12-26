/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pru_isascii.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:59:48 by joadomin          #+#    #+#             */
/*   Updated: 2023/11/27 20:01:20 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int main()
{
	char ascii = 'á';

	if(isascii(ascii))
	{
		printf("%c es un carácter ascii.\n", ascii);
	}
	else
	{
		printf("%c no es un carácter ascii.\n", ascii);
	}

	return(0);
}
