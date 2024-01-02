/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 16:40:56 by joadomin          #+#    #+#             */
/*   Updated: 2024/01/02 07:37:12 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(const char *str, int *punt_i)
{
	int	no_neg;
	int	j;
	int	count;

	j = 0;
	count = 0;
	no_neg = 0;
	while (str[j] != '\0' && count == 0)
	{
		if (str[j] == ' ' || str[j] == '0' || (str[j] >= '\t' && str[j] <= '\r'))
			if (str[j] == '0' && str[j + 1] == ' ')
				return (0);
			else
				j++;
		else if (str[j + 1] == ' ')
			return (0);
		else if (str[j] == '-' && no_neg == 0)
		{
			if ((str[j + 1] >= '\t' && str[j + 1] <= '\r') || (str[j + 1] == ' '))
				return (0);
			else
			{
				no_neg = -1;
				j++;
			}
		}
		else if (str[j] == '+' && no_neg == 0)
		{
			if ((str[j + 1] >= '\t' && str[j + 1] <= '\r') || (str[j + 1] == ' '))
				return (0);
			else
			{
				no_neg = 1;
				j++;
			}
		}
		else if (str[j] < '0' || str[j] > '9')
			return (0);
		else
		{
			count = 1;
			if (no_neg == 0)
				no_neg = 1;
		}
	}
	*punt_i = j;
	return (no_neg);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	total;
	int	i;

	total = 0;
	i = 0;
	sign = ft_check(&str[0], &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		total = total * 10 + (str[i] - '0');
		i++;
	}
	total *= sign;
	return (total);
}
