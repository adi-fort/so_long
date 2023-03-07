/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:12:32 by adi-fort          #+#    #+#             */
/*   Updated: 2023/03/07 17:23:27 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	map_check(t_game *game)
{
	check_all(game);
	check_map(game);
	check_player_exit(game);
}

void	check_all(t_game *game)
{
	int		i;
	int		j;

	i = 0;
	while (i < game->line_width - 1)
	{
		j = 0;
		while (game->map[i][j] != 10)
		{
			if (game->map[i][j] != 'C' && game->map[i][j] != '1' && game->map[i][j] != '0' && game->map[i][j] != 'E' && game->map[i][j] != 'P' && game->map[i][j] != 10)
			{
				write(1, "Error: Not valid map\n", 21);
				ft_free_map(game);
				exit (0);
			}
			j++;
		}
		i++;
	}
}

void	check_player_exit(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	game->p = 0;
	game->e = 0;
	while (i < game->line_width - 1)
	{
		j = 0;
		while (game->map[i][j] != 10)
		{
			if (game->map[i][j] == 'P')
				game->p += 1;
			if (game->map[i][j] == 'E')
				game->e += 1;
			j++;
		}
		i++;
	}
	if (game->p != 1 || game->e != 1)
	{
		write(1, "Error: too many stuffs\n", 23);
		ft_free_map(game);
		exit (0);
	}
}

void	check_map(t_game *game)
{
	int		i;
	int		j;
	char	*a;

	a = "Error: Check the map, again.\n";
	i = 0;
	while (i < game->line_width -1)
	{
		j = 0;
		while (game->map[i][j] != 10)
		{	
			if (game->map[0][j] != '1' || game->map[i][0] != '1' || game->map[game->line_width -2][j] != '1' || game->map[i][game->line_lenght -2] != '1')
			{
				ft_printf("%s\n", a);
				ft_free_map(game);
				exit(0);
			}
			j++;
		}
		i++;
	}
}

void	ft_free_map(t_game *game)
{	
	int	i;

	i = 0;
	while (game->map[i])
	{
		free(game->map[i]);
		i++;
	}
	free(game->map);
}
