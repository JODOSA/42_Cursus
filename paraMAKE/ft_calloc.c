/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 17:28:11 by joadomin          #+#    #+#             */
/*   Updated: 2024/01/03 17:44:08 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t num_items, size_t size)
{
	void	*mem;

	mem = malloc(num_items * size);
	if (mem == 0)
		return (NULL);
	else
	{
		ft_bzero(mem, (num_items * size));
		return (mem);
	}
}
