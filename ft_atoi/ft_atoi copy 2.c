/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi copy 2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 14:12:26 by joadomin          #+#    #+#             */
/*   Updated: 2024/01/06 09:09:37 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	total;
	int	no_neg;
	int	i;

	total = 0;
	no_neg = 0;
	i = 0;
	while (str[i] != '\0' && no_neg == 0)
	{
		if (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
				i++;
		else if (str[i] == '-')
		{
			no_neg = -1;
			i++;
		}
		else if (str[i] == '+')
		{
			no_neg = 1;
			i++;
		}
		else
			no_neg = 1;
	}
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
	char	mystr[] = "df-50asdf";

	var_atoi = ft_atoi(&mystr[0]);
	printf("%i\n", var_atoi);

	return (0);
}