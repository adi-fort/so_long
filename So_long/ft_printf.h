/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <adi-fort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:36:27 by adi-fort          #+#    #+#             */
/*   Updated: 2023/02/06 15:20:39 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	ft_putstring(char i, int *count, va_list list);
int		ft_putchar_ret(char c);
int		ft_putstr_ret(char *c);
int		ft_putnbr_ret(int n);
int		ft_putnbr_u_ret(unsigned int n);
char	*ft_itoa(int n);
int		ft_exadecimal(unsigned long long n);
int		ft_upper_exadecimal(unsigned long long n);
char	*ft_itoa_ex(unsigned int n);
int		ft_toupper_ex(int n);
int		ft_pointer(unsigned long long n);
char	*ft_strdup_ex(const char *new);
char	*ft_itoa_u(unsigned int n);
char	*ft_itoa_ex_p(unsigned long n);
#endif
