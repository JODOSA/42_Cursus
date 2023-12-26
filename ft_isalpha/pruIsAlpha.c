/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruIsAlpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:35:22 by joadomin          #+#    #+#             */
/*   Updated: 2023/11/27 17:59:17 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int main()
{
	char character = 'z';

	if (isalpha(character))
	{
		printf("%c es una letra.\n", character);
	}else
	{
		printf("%c no es una letra.\n", character);
	}

	return (0);
}
