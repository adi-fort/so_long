#include "so_long.h"

void	map_check(t_game *game)
{
	check_all(game);
//	check_collectibles(game);
//	check_player(game);
//	check_exit(game);
}

/*void	check_all(t_game *game)
{
	int		i;
	int		j;
	char	*a;
	i = 0;
	a = "I said goddamn! I said goddamn, goddamn, goddamn. -Mia Wallace";
	while (i < game->line_width - 1)
	{
		j = 0;
		while (game->map[i][j] != 10)
		{
			if (game->map[i][j] != 'C' && game->map[i][j] != '1' && game->map[i][j] != '0' && game->map[i][j] != 'E' && game->map[i][j] != 'P' && game->map[i][j] != 10)
			{
				ft_printf("%s\n", a);
				exit (0);
			}
			j++;
		}
		i++;
	}
}*/
