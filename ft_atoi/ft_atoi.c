/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 14:12:26 by joadomin          #+#    #+#             */
/*   Updated: 2023/12/31 13:58:17 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_check(char *str, int *punt_i)
{
	int	no_neg;
	int	i;
	int	j;
    int count;

	i = 0;
	j = 0;
    count = 0;
	no_neg = 1;
	while (str[j] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 31)
		{
			return (0);
			//i++;
		}
		if ((str[i] == 43 || str[i] == 45))
		{
            count++;
			if (str[i] == 45)
				no_neg *= -1;
			i++;
		}
		j++;
	}
    if (count > 1)
        no_neg = 0;
	*punt_i = i;
	return (no_neg);
}

int	ft_atoi(char *str)
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

int main()
{
	int var_atoi;
	char	mystr[] = "\e475";

	var_atoi = ft_atoi(&mystr[0]);
	printf("%i\n", var_atoi);

	return (0);
}