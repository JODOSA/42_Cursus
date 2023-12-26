/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pru_isdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:51:58 by joadomin          #+#    #+#             */
/*   Updated: 2023/11/27 19:18:16 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int main()
{
	char digit = '10';

	if(isdigit(digit))
	{
		printf("%c es un número.\n", digit);
	}
	else
	{
		printf("%c no es un número.\n", digit);
	}

	return(0);
}
