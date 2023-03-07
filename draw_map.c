/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:06:46 by adi-fort          #+#    #+#             */
/*   Updated: 2023/03/07 16:38:04 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	player_img(t_game *game)
{
	int	i;
	int	j;

	game->player = mlx_xpm_file_to_image(game->mlx, "pulp.xpm", &i, &i);
	if (!game->player)
		return ;
	i = 0;
	while (i < game->line_width - 1)
	{
		j = 0;
		while (game->map[i][j] != 10)
		{
			if (game->map[i][j] == 'P')
			{
				mlx_put_image_to_window(game->mlx, game->mlx_win, game->player, j * 50, i * 50);
				game->pi = i;
				game->pj = j;
			}
			j++;
		}
		i++;
	}
}

void	texture_img(t_game *game)
{	
	int	i;
	int	j;

	game->texture = mlx_xpm_file_to_image(game->mlx, "Grass.xpm", &i, &j);
	if (!game->texture)
		return ;
	i = 0;
	while (i < game->line_width - 1)
	{	
		j = 0;
		while (game->map[i][j] != 10)
		{
			mlx_put_image_to_window(game->mlx, game->mlx_win, game->texture, j * 50, i * 50);
			j++;
		}
		i++;
	}
}

void	wall_img(t_game *game)
{	
	int	i;
	int	j;

	game->wall = mlx_xpm_file_to_image(game->mlx, "wall.xpm", &i, &j);
	if (!game->wall)
		return ;
	i = 0;
	while (i < game->line_width - 1)
	{
		j = 0;
		while (game->map[i][j] != 10)
		{	
			if (game->map[i][j] == '1')
				mlx_put_image_to_window(game->mlx, game->mlx_win, game->wall, j * 50, i * 50);
			j++;
		}
		i++;
	}
}

void	mushroom_img(t_game *game)
{
	int	i;
	int	j;

	game->counter = 0;
	game->mushroom = mlx_xpm_file_to_image(game->mlx, "mia.xpm", &i, &j);
	if (!game->mushroom)
		return ;
	i = 0;
	while (i < game->line_width - 1)
	{
		j = 0;
		while (game->map[i][j] != 10)
		{
			if (game->map[i][j] == 'C')
			{
				game->counter++;
				mlx_put_image_to_window(game->mlx, game->mlx_win, game->mushroom, j * 50, i * 50);
			}
			j++;
		}
		i++;
	}
}

void	exit_img(t_game *game)
{
	int	i;
	int	j;

	game->exit = mlx_xpm_file_to_image(game->mlx, "bad.xpm", &i, &j);
	if (!game->exit)
		return ;
	i = 0;
	while (i < game->line_width -1)
	{
		j = 0;
		while (game->map[i][j] != 10)
		{
			if (game->map[i][j] == 'E')
				mlx_put_image_to_window(game->mlx, game->mlx_win, game->exit, j * 50, i * 50);
			j++;
		}
		i++;
	}
}
