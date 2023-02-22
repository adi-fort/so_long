/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ret.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:31:46 by adi-fort          #+#    #+#             */
/*   Updated: 2023/02/06 15:22:05 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr_ret(int n)
{
	char	*str;
	int		len;

	str = ft_itoa(n);
	len = ft_putstr_ret(str);
	free(str);
	return (len);
}

int	ft_putnbr_u_ret(unsigned int n)
{
	char	*str;
	int		len;

	str = ft_itoa_u(n);
	len = ft_putstr_ret(str);
	free(str);
	return (len);
}
