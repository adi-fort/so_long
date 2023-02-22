/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exadecimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 10:18:28 by adi-fort          #+#    #+#             */
/*   Updated: 2023/02/06 12:13:52 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_exadecimal(unsigned long long n)
{
	char	*str;
	int		len;

	str = ft_itoa_ex(n);
	len = ft_putstr_ret(str);
	free(str);
	return (len);
}

int	ft_upper_exadecimal(unsigned long long n)
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	str = ft_itoa_ex(n);
	while (str[i] != 0)
	{
		str[i] = ft_toupper_ex(str[i]);
		i++;
	}
	len = ft_putstr_ret(str);
	free(str);
	return (len);
}
