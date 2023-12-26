/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pru_memset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:24:37 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/01 16:15:10 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int main()
{
	int mystr[5];
	int i = 0;

	memset(mystr, 1, sizeof(mystr));


	while(mystr[i] < 5)
	{
		printf("%d ", mystr[i]);
		i++;
	}
	printf("\n");

	return(0);
}
