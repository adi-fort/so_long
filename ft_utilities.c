/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilities.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <adi-fort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:54:32 by adi-fort          #+#    #+#             */
/*   Updated: 2023/02/03 15:56:50 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strdup_ex(const char *s)
{
	char	*new;
	int		i;
	int		size;

	size = 0;
	i = 0;
	while (s[size] != 0)
		size++;
	new = malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	while (s[i] != 0)
	{
		new[i] = s[i];
		i++;
	}
	new[i] = 0;
	return (new);
}

int	ft_toupper_ex(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
