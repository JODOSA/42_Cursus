/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:49:35 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/05 14:27:21 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_bzero(void *str, size_t n){

	size_t i;

	i = 0;
	while(i < n){
		/* Hace una conversión de tipo.  Convierte el puntero "str" a puntero
		 * de tipo char.  Esto sirve para indicar que se va a tratar la memoria
		 * apuntada por "str" como caracteres individuales.  */
		((char*)str)[i] = 0;
		i++;
	}

}
int main(){

	char mystr[11] = "Hola mundo";
	printf("%s\n", mystr);

	ft_bzero(&mystr[6], 5);

	// ft_bzero(&mystr[5], sizeof(mystr) - 5);

	printf("Después de ft_bzero: %s\n", mystr);

	return(0);

}
