/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_ex_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:49:22 by adi-fort          #+#    #+#             */
/*   Updated: 2023/02/06 15:29:54 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_howlong_ex_p(unsigned long c)
{
	int	count;

	if (c == 0)
		return (1);
	count = 0;
	while (c != 0)
	{
		c = c / 16;
		count++;
	}
	return (count);
}

char	*ft_itoa_ex_p(unsigned long n)
{
	long int	i;
	char		*new;
	char		*set;

	set = "0123456789abcdef";
	i = 0;
	i = ft_howlong_ex_p(n);
	new = (char *)malloc((i + 1) * sizeof(char));
	if (!new)
		return (0);
		new[i] = 0;
	if (n == 0)
		new[0] = n + 48;
	while (n != 0)
	{
		if (n < 16)
			new[--i] = set[n];
		else
			new[--i] = set[n % 16];
		n = n / 16;
	}
	return (new);
}
