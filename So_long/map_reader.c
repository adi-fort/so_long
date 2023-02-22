/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_reader.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:22:48 by adi-fort          #+#    #+#             */
/*   Updated: 2023/02/22 15:46:10 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "get_next_line.h"
#include "ft_printf.h"
#include "libft.h"

void map_reader(t_game game)
{
	int	fd = 0;
	char *line;
	static char	*buffer;

	game.line_lenght = 0;
	game.line_width = 0;

	
	fd = open("mlx.xpm", O_RDONLY);
	read(fd, buffer, 10000);
	line =  get_next_line(fd);
	if (!line)
		return ;
	game.line_lenght = ft_strlen(line);
	while (1)
	{
		game.line_width += 1;
		free(line);
		line = get_next_line(fd);
	//	if (game.line_lenght != ft_strlen(line))
	//	{
	//		free(line);
		//	game.err = 1;
	//		break;
	//	}
		if (!line)
			break ;
	}	
	ft_printf("lenght: %d", game.line_lenght);
	ft_printf("width:  %d", game.line_width);
}
