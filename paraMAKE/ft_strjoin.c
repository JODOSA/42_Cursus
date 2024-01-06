/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 16:30:02 by joadomin          #+#    #+#             */
/*   Updated: 2024/01/06 16:40:45 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	char	*s3;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen (s1);
	len2 = ft_strlen (s2);
	s3 = malloc (len1 + len2 + 1);
	if (!s3)
		return (NULL);
	ft_strlcpy (s3, s1, len1 + 1);
	ft_strlcpy (s3 + len1, s2, len2 + 1);
	return (s3);
}
