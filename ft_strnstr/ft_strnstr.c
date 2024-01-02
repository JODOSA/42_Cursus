/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 14:03:19 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/30 14:13:00 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
int main ()
{
	char str[] = "Hola mundo graciosillo";
	char substr[] = "mundo";
	
	printf("Cadena encontrada: %s\n", ft_strnstr(str, substr, 22));

	
	return (0);
}
