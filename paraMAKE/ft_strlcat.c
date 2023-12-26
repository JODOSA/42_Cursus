/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:29:24 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/23 20:09:39 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	sr;
	size_t	ds;
	int		i;

	i = 0;
	ds = ft_strlen(dst);
	sr = ft_strlen(src);
	if (dstsize <= ds)
	{
		return (sr + dstsize);
	}
	while (src[i] != '\0' && (ds + i) < (dstsize - 1))
	{
		dst[ds + i] = src[i];
		i++;
	}
	dst[ds + i] = '\0';
	return (sr + ds);
}
