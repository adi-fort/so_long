/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <adi-fort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:50:17 by adi-fort          #+#    #+#             */
/*   Updated: 2023/02/06 15:26:18 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_howlong(int c)
{
	int	count;

	if (c == 0)
		return (1);
	if (c == -2147483648)
		return (11);
	count = 0;
	if (c < 0)
	{
		++count;
		c = c * -1;
	}
	while (c != 0)
	{
		c = c / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*new;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup_ex("-2147483648"));
	i = ft_howlong(n);
	new = (char *)malloc((i + 1) * sizeof(char));
	if (!new)
		return (0);
	if (n < 0)
	{
		new[0] = '-';
		n *= -1;
	}
	new[i] = 0;
	if (n == 0)
		new[0] = n + 48;
	while (n != 0)
	{
			new[--i] = n % 10 + 48;
			n = n / 10;
	}
	return (new);
}
