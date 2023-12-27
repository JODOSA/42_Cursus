/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_pool.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 11:52:48 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/27 10:56:30 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	size_s1;
	int	size_s2;
	int	i;
	int	dif;

	dif = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	size_s1 = i;
	i = 0;
	while (s2[i] != '\0')
	{
		i++;
	}
	size_s2 = i;
	if (size_s1 > size_s2)
	{
		dif = -7;
		return (dif);
	}
	else if (size_s1 < size_s2)
	{
		dif = 7;
		return (dif);
	}
	return (dif);
}

int main()
{
	char	source[] = "adios";
	char	destin[] = "adios";
	int		result;

	result = ft_strcmp(&source[0], &destin[0]);

	printf("%i", result);

	return (0);
}
