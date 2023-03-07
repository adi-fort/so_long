/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_door.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:29:24 by adi-fort          #+#    #+#             */
/*   Updated: 2023/03/07 17:22:27 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	open_door(t_game *game)
{
	int	i;
	int	j;

	game->door = mlx_xpm_file_to_image(game->mlx, "case.xpm", &i, &j);
	if (!game->door)
		return ;
	i = 0;
	while (i < game->line_width -1)
	{
		j = 0;
		while (game->map[i][j] != 10)
		{
			if (game->map[i][j] == 'E')
			{
				mlx_put_image_to_window(game->mlx, game->mlx_win, game->texture, j * 50, i * 50);
				mlx_put_image_to_window(game->mlx, game->mlx_win, game->door, j * 50, i * 50);
			}
			j++;
		}
		i++;
	}
}
