/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 14:12:26 by joadomin          #+#    #+#             */
/*   Updated: 2024/01/06 12:10:24 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	total;
	int	no_neg;
	int	i;

	total = 0;
	no_neg = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
		if (str[i] == '-')
			no_neg = -1;
		if (str[i] == '-' || str[i] == '+')
			i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		total = total * 10 + (str[i] - '0');
		i++;
	}
	total *= no_neg;
	return (total);
}

int main()
{
	int var_atoi;
	char	mystr[] = "-50";

	var_atoi = ft_atoi(&mystr[0]);
	printf("%i\n", var_atoi);

	return (0);
}