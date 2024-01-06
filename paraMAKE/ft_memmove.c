/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 19:23:58 by joadomin          #+#    #+#             */
/*   Updated: 2024/01/06 19:32:54 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pdest;
	unsigned const char	*psrc;

	pdest = (unsigned char *)dest;
	psrc = (unsigned const char *)src;
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	if (!n || dest == src)
		return (dest);
	while (n--)
		pdest[n] = psrc[n];
	return (dest);
}
