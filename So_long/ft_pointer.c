/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:44:07 by adi-fort          #+#    #+#             */
/*   Updated: 2023/02/06 15:16:57 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_pointer(unsigned long long n)
{
	char	*str;
	int		len;

	str = ft_itoa_ex_p(n);
	write(1, "0x", 2);
	len = ft_putstr_ret(str);
	free(str);
	return (len + 2);
}
