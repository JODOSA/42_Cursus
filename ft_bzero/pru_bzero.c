/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pru_bzero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 09:44:56 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/05 14:40:53 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <stdio.h>

int main(){
	int array[10] = {1,2,3,4,5,6,7,8,9};

	bzero(array, sizeof(array));

	printf("Después de bzero: %d\n", array[0]);

	return(0);
}
