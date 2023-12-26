/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:29:30 by joadomin          #+#    #+#             */
/*   Updated: 2023/11/27 19:43:38 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_isalnum(char character)
{
	if(character >= '0' && character <= '9')
	{
		return(1);
	}
	if(character >= 'a' && character <= 'z')
	{
		return(1);
	}
	if(character >= 'A' && character <= 'Z')
	{
		return(1);
	}

	return(0);

}
int main()
{
	char character = '&';

	if(ft_isalnum(character))
	{
		printf("%c es carácter alfanumérico.\n", character);
	}
	else
	{
		printf("%c no es un carácter alfanumérico.\n", character);
	}

	return(0);
}
