/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 11:40:26 by adi-fort          #+#    #+#             */
/*   Updated: 2023/01/30 14:14:55 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	negative;

	negative = 0;
	num = 0;
	i = 0;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v')
		|| (str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			negative = 1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + ((int)str[i] - '0');
		i++;
	}
	if (negative == 1)
		return (num * -1);
	else
		return (num);
}
