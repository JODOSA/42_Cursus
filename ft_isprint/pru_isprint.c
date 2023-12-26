/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pru_isprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:55:39 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/01 11:06:16 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int main()
{
	char digit = 23;

	if(isprint(digit))
	{
		printf("%c es un carácter imprimible.\n", digit);
	}
	else
	{
		printf("%c no es un carácter imprimible.\n", digit);
	}

	return(0);
}
