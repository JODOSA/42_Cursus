/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:02:43 by joadomin          #+#    #+#             */
/*   Updated: 2023/11/27 20:13:16 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_isascii(char character)
{
	if(character >= 0 && character <= 127)
	{
		return(1);
	}

	return(0);

}
int main()
{
	char character = 'D';

	if(ft_isascii(character))
	{
		printf("%c es un carácter ascii.\n", character);
	}

	return(0);
}
