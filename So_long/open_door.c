#include "so_long.h"

void	open_door(t_game *game)
{
	int i;
	int	j;

	game->door = mlx_xpm_file_to_image(game->mlx, "case.xpm", &i, &j);
	if (!game->door)
		return ;
	i = 0;
	while(i < game->line_width -1)
	{
		j = 0;
		while(game->map[i][j] != 10)
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
