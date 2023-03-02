/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_reader.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:22:48 by adi-fort          #+#    #+#             */
/*   Updated: 2023/03/02 13:48:22 by adi-fort         ###   ########.fr       */
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

void map_reader(t_game *game)
{
	char *line;

	game->line_lenght = 0;
	game->line_width = 0;
	game->fd = open("map.ber", O_RDONLY);
	line =  get_next_line(game->fd);
	if (!line)
		return ;
	game->line_lenght = ft_strlen(line);
	while (1)
	{
		game->line_width += 1;
		free(line);
		line = get_next_line(game->fd);
		if (!line)
			break ;
	}	
	close(game->fd);
}

void map_malloc(t_game *game)
{
	char	*line;
	int		i;

	game->fd = open("map.ber", O_RDONLY);
	line = get_next_line(game->fd);
	game->map = (char **) malloc (sizeof(char *) * (game->line_width + 1));
	i = 0;
	while (line)
	{
		game->map[i] = line;
		line = get_next_line(game->fd);
		i++;
	}
	game->map[i] = NULL;
	free (line);
	line = NULL;
	close(game->fd);
}

void	printf_mat(char **strs)
{
	int i;
	int	j;

	i = -1;
	while(strs[++i])
	{
		j = -1;
		while (strs[i][++j])
		{
			printf("%c", strs[i][j]);
		}
		printf("\n");
	}
}
