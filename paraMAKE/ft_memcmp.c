/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 19:26:31 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/28 19:41:01 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	int					diff;
	const unsigned char	*ps1;
	const unsigned char	*ps2;

	ps1 = s1;
	ps2 = s2;
	i = 0;
	diff = 0;
	while (i < n)
	{
		if (ps1[i] != ps2[i])
		{
			diff = ps1[i] - ps2[i];
			return (diff);
		}
		i++;
	}
	if (diff == 0 && i >= n)
	{
		return (diff);
	}
}
