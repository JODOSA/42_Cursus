/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 13:14:36 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/30 13:39:21 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (*needle == '\0' || needle == NULL)
	{
		return ((char *)haystack);
	}
	while (haystack[i] != '\0' && i < len)
	{
		n = 0;
		while (needle[n] == haystack[i + n] && i + n < len)
		{
			if (needle[n + 1] == '\0')
			{
				return ((char *)haystack + i);
			}
			n++;
		}
		i++;
	}
	return (NULL);
}
