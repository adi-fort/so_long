/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:11:28 by adi-fort          #+#    #+#             */
/*   Updated: 2023/03/07 17:38:55 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_player_up(t_game *game)
{
	if ((game->map[game->pi -1][game->pj] == '1') || (game->map[game->pi -1][game->pj] == 'E' && game->counter > 0))
	{
		write(1, "\a", 1);
		return ;
	}
	if (game->map[game->pi -1][game->pj] == 'C')
	{
		game->counter -= 1;
		game->map[game->pi][game->pj] = '0';
		game->map[game->pi - 1][game->pj] = 'P';
	}
	mlx_put_image_to_window(game->mlx, game->mlx_win, game->texture, game->pj * 50, game->pi * 50);
	game->pi = game->pi -1;
	mlx_put_image_to_window(game->mlx, game->mlx_win, game->player, game->pj * 50, game->pi * 50);
	game->moves += 1;
	ft_printf("Moves: %d\n", game->moves);
}

void	move_player_down(t_game *game)
{
	if ((game->map[game->pi +1][game->pj] == '1') || (game->map[game->pi +1][game->pj] == 'E' && game->counter > 0))
	{
		write(1, "\a", 1);
		return ;
	}
	if (game->map[game->pi +1][game->pj] == 'C')
	{	
		game->counter -= 1;
		game->map[game->pi][game->pj] = '0';
		game->map[game->pi +1][game->pj] = 'P';
	}
	mlx_put_image_to_window(game->mlx, game->mlx_win, game->texture, game->pj * 50, game->pi * 50);
	game->pi = game->pi + 1;
	mlx_put_image_to_window(game->mlx, game->mlx_win, game->player, game->pj * 50, game->pi * 50);
	game->moves += 1;
	ft_printf("Moves: %d\n", game->moves);
}

void	move_player_right(t_game *game)
{
	if ((game->map[game->pi][game->pj +1] == '1') || (game->map[game->pi][game->pj +1] == 'E' && game->counter > 0))
	{
		write(1, "\a", 1);
		return ;
	}
	if (game->map[game->pi][game->pj +1] == 'C')
	{
		game->counter -= 1;
		game->map[game->pi][game->pj] = '0';
		game->map[game->pi][game->pj + 1] = 'P';
	}
	mlx_put_image_to_window(game->mlx, game->mlx_win, game->texture, game->pj * 50, game->pi * 50);
	game->pj = game->pj + 1;
	mlx_put_image_to_window(game->mlx, game->mlx_win, game->player, game->pj * 50, game->pi * 50);
	game->moves += 1;
	ft_printf("Moves: %d\n", game->moves);
}

void	move_player_left(t_game *game)
{
	if ((game->map[game->pi][game->pj -1] == '1') || (game->map[game->pi][game->pj -1] == 'E' && game->counter > 0))
	{
		write(1, "\a", 1);
		return ;
	}
	if (game->map[game->pi][game->pj -1] == 'C')
	{	
		game->counter -= 1;
		game->map[game->pi][game->pj] = '0';
		game->map[game->pi][game->pj - 1] = 'P';
	}
	mlx_put_image_to_window(game->mlx, game->mlx_win, game->texture, game->pj * 50, game->pi * 50);
	game->pj = game->pj - 1;
	mlx_put_image_to_window(game->mlx, game->mlx_win, game->player, game->pj * 50, game->pi * 50);
	game->moves += 1;
	ft_printf("Moves: %d\n", game->moves);
}

int	key_hook(int key, t_game *game)
{	
	if (key == 53)
		ft_game_over(game);
	if (key == 2 || key == 124)
		move_player_right(game);
	if (key == 0 || key == 123)
		move_player_left(game);
	if (key == 1 || key == 125)
		move_player_down(game);
	if (key == 13 || key == 126)
		move_player_up(game);
	if (game->counter == 0)
		open_door(game);
	if (game->map[game->pi][game->pj] == 'E')
		ft_game_win(game);
	return (1);
}
