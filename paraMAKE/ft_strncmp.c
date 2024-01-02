/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 13:07:55 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/30 13:33:39 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		dif;
	size_t	i;

	dif = 0;
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && dif == 0 && i < n)
	{
		dif = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	if (dif == 0 && i < n)
		dif = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (dif);
}
