/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 09:23:04 by adi-fort          #+#    #+#             */
/*   Updated: 2023/02/06 10:36:04 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_howlong_u(unsigned int c)
{
	int	count;

	if (c == 0)
		return (1);
	count = 0;
	while (c != 0)
	{
		c = c / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa_u(unsigned int n)
{
	int		i;
	char	*new;

	i = 0;
	i = ft_howlong_u(n);
	new = (char *)malloc((i + 1) * sizeof(char));
	if (!new)
		return (0);
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
