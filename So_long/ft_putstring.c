/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:49:12 by adi-fort          #+#    #+#             */
/*   Updated: 2023/02/06 15:23:49 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putstring(char i, int *count, va_list list)
{
	if (i == '%')
		*count += write(1, "%", 1);
	else if (i == 'c')
		*count += ft_putchar_ret(va_arg(list, int));
	else if (i == 's')
		*count += ft_putstr_ret(va_arg(list, char *));
	else if (i == 'd' || i == 'i')
		*count += ft_putnbr_ret(va_arg(list, int));
	else if (i == 'u')
		*count += ft_putnbr_u_ret(va_arg(list, unsigned int));
	else if (i == 'x')
		*count += ft_exadecimal(va_arg(list, unsigned long long));
	else if (i == 'X')
		*count += ft_upper_exadecimal(va_arg(list, unsigned long long));
	else if (i == 'p')
		*count += ft_pointer(va_arg(list, unsigned long long));
	else
		*count += ft_putchar_ret(i);
}
