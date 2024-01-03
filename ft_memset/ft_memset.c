/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodosa <jodosa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 19:22:05 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/17 20:16:48 by jodosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	size_t			z;

	p = b;
	z = 0;
	while (z < len)
	{
		p[z] = (unsigned char)c;
		z++;
	}
	return (b);
}
