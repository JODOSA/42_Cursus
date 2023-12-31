/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 13:07:58 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/27 06:57:30 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*punts;

	while (c >= 256)
	{
		c = c - 256;
	}
	if (c == 0)
	{
		c = '\0';
	}
	punts = (char *)s;
	while (*punts)
	{
		if (*punts == c)
		{
			return (punts);
		}
		punts++;
	}
	if (c == '\0')
	{
		return (punts);
	}
	return (NULL);
}
