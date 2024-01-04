/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:08:15 by joadomin          #+#    #+#             */
/*   Updated: 2024/01/04 18:48:04 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*psub;
	char	*presult;
	int		len_s;
	int		j;
	int		lon;

	lon = len;
	len_s = ft_strlen(s);
	if (len_s < lon || len_s < ((int)start + lon))
		return (0);
	psub = malloc (len + 1);
	presult = psub;
	j = 0;
	while (j < lon)
	{
		presult[j] = s[start];
		start++;
		j++;
	}
	presult[j + 1] = '\0';
	printf("%s\n", psub);
	return (psub);
}
