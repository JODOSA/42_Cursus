/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:07:53 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/01 11:32:03 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_isprint(char digit)
{
	if(digit >= 32 && digit <= 126)
	{
		return(1);
	}
	return(0);

}
int main()
{
	char digit = 02;

	if(ft_isprint(digit))
	{
		printf("%c es un carácter imprimible", digit);
	}
	else
	{
		printf("%c no es un carácter imprimible", digit);
	}


	return(0);
}
