#include "so_long.h"

void	player_img(t_game *game)
{
	int i;

	game->player = mlx_xpm_file_to_image(game->mlx, "images__1_-removebg-preview.xpm", &i, &i);
	if (!game->player)
		return ;
	mlx_put_image_to_window(game->mlx, game->mlx_win, game->player, 4 * i, 3 * i);
}
	
void	texture_img(t_game *game)
{	
	int	x;
	int	y; 
	
	game->texture = mlx_xpm_file_to_image(game->mlx, "Texture_resized50x50.xpm", &x, &y);
	if (!game->texture)
		return ;
	y = 0;
	x = 0;
	while (x <= 1000)
	{	
		while (y <= 600)
		{
			mlx_put_image_to_window(game->mlx, game->mlx_win, game->texture, x, y);
			y += 50;
		}
		y = 0;
		x += 50;
	}
}

void	wall_img(t_game *game)
{	
	int i;
	int j;

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
	int i;
	int j;
	
	game->mushroom = mlx_xpm_file_to_image(game->mlx, "mush1.xpm", &i, &j);
	if(!game->mushroom)
		return ;
	i = 0;
	while (i < game->line_width - 1)
	{
		j = 0;
		while (game->map[i][j] != 10)
		{
			if (game->map[i][j] == 'C')
				mlx_put_image_to_window(game->mlx, game->mlx_win, game->mushroom, j * 50, i * 50);
			j++;
		}
		i++;
	}
}
