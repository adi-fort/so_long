/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:51:30 by adi-fort          #+#    #+#             */
/*   Updated: 2023/02/06 15:19:08 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(list, format);
	if (!format)
	{	
		write(1, "(NULL)", 1);
		return (6);
	}
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			ft_putstring(format[i], &count, list);
		}
		else
			count += write(1, &format[i], 1);
		i++;
	}
	va_end(list);
	return (count);
}
