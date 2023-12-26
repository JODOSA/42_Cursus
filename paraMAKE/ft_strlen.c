/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 12:25:06 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/07 12:27:46 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	length;
	int		i;

	length = 0;
	i = 0;
	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}
