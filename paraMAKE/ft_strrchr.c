/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 07:55:03 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/27 09:14:17 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*punts;
	char	*endpunts;

	endpunts = NULL;
	while (c >= 256)
		c = c - 256;
	if (c == 0)
		c = '\0';
	punts = (char *)s;
	while (*punts)
	{
		if (*punts == c)
			endpunts = punts;
		punts++;
	}
	if (c == '\0')
		return (punts);
	if (*punts == '\0')
		return (endpunts);
	return (NULL);
}
