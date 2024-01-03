/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 18:38:09 by joadomin          #+#    #+#             */
/*   Updated: 2024/01/03 18:48:17 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		size;
	char	*mem;

	size = ft_strlen (s);
	mem = malloc (size + 1);
	if (mem == NULL)
	{
		return (NULL);
	}
	ft_strlcpy (mem, s, size + 1);
	return (mem);
}
