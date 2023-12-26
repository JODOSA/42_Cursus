/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 11:46:31 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/22 12:02:48 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c)
{
	if (c < 97 || c > 122)
	{
		return (c);
	}else
	{
		c = c - 32;
		return (c);
	}

}
int main()
{
	char low = 's';
	char upp;

	upp = ft_toupper(low);

	printf("Contenido de upp %c\n", upp);


	return(0);
}
