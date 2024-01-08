/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:08:15 by joadomin          #+#    #+#             */
/*   Updated: 2024/01/08 08:59:04 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*presult;
	unsigned int	len_s;
	int		j;
	int		lon;

	lon = len;
	len_s = ft_strlen(s);
	presult = malloc(len + 1);
	if (!s || !presult)
		return (NULL);
	if (start > len_s)
		return (ft_strdup(""));
	j = 0;
	while (lon != 0)
	{
		presult[j] = s[start];
		start++;
		j++;
		lon--;
	}
	presult[j] = '\0';
	return (presult);
}
