/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:24:11 by adi-fort          #+#    #+#             */
/*   Updated: 2023/02/24 12:20:14 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_check_read(int ret, char *line)
{
	if (ret < 0)
	{
		if (line)
			free(line);
		return (1);
	}
	return (0);
}

void	ft_movebuffer(char *buffer)
{
	int	i;

	i = 0;
	while (i < BUFFER_SIZE - 1)
	{
		buffer[i] = buffer[i + 1];
		if (!buffer[i])
			break ;
		i++;
	}
	buffer[i] = 0;
}

char	*ft_realloc(char *line, char *buffer)
{
	char	*new;

	if (!line)
	{
		new = (char *)malloc(2 * sizeof(char));
		if (!new)
			return (NULL);
		new[0] = buffer[0];
		new[1] = 0;
	}
	else
		new = ft_strjoin(line, buffer);
	ft_movebuffer(buffer);
	return (new);
}

char	*ft_strjoin(char *line, char *buffer)
{
	int		len;
	char	*new;

	len = 0;
	while (line[len])
		len++;
	new = (char *)malloc((len + 2) * sizeof(char));
	if (!new)
	{
		free(line);
		return (NULL);
	}
	new[len + 1] = 0;
	new[len] = buffer[0];
	len--;
	while (len >= 0)
	{
		new[len] = line[len];
		len--;
	}
	if (line)
		free(line);
	return (new);
}

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE];
	char		*line;
	int			ret;

	ret = 1;
	line = 0;
	while (ret != 0)
	{
		while (buffer[0] != '\n' && buffer[0])
		{
			line = ft_realloc(line, buffer);
			if (!line)
				return (NULL);
		}
		if (buffer[0] == '\n')
		{
			line = ft_realloc(line, buffer);
			break ;
		}
		ret = read(fd, buffer, BUFFER_SIZE);
		if (ft_check_read(ret, line))
			return (NULL);
	}
	return (line);
}
