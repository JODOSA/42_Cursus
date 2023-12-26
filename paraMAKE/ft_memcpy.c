/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 07:53:02 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/22 19:00:13 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned const char	*sr;
	unsigned char		*ds;
	size_t				i;

	sr = src;
	ds = dst;
	i = 0;
	while (ds == sr || !len)
	{
		return (dst);
	}
	while (i < len)
	{
		ds[i] = sr[i];
		i++;
	}
	return (dst);
}
