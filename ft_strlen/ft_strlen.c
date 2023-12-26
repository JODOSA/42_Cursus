/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 12:25:06 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/01 12:38:02 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char mystr[])
{
	int length = 0;
	int i = 0;

	while(mystr[i] != '\0')
	{
		length++;
		i++;
	}

	return(length);

}
int main()
{
	char mystr[10] = "hola";
	int len = 0;

	len = (ft_strlen(mystr));

	printf("%d es la longitud de mystr.\n", len);

	return(0);
}
