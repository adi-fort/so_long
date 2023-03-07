/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:16:51 by adi-fort          #+#    #+#             */
/*   Updated: 2023/03/07 17:42:20 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char	**av)
{
	t_game	img;
	int		i;

	if (ac != 2)
	{
		write(1, "Error: Arguments number\n", 24);
		return (0);
	}
	i = ft_strlen(av[1]);
	if (i < 5 || av[1][i - 1] != 'r' || av[1][i - 2] != 'e' || av[1][i - 3] != 'b' || av[1][i - 4] != '.')
		return (write(1, "Error: map name\n", 16));
	img.moves = 0;
	img.mlx = mlx_init();
	map_reader(&img);
	map_malloc(&img);
	map_check(&img);
	img.mlx_win = mlx_new_window(img.mlx, (img.line_lenght -1) * 50, (img.line_width -1) * 50, "so_long");
	texture_img(&img);
	wall_img(&img);
	player_img(&img);
	mushroom_img(&img);
	exit_img(&img);
	mlx_key_hook(img.mlx_win, key_hook, &img);
 //	mlx_hook(img.mlx_win, 17, 0, ft_game_over, &img);
	mlx_loop(img.mlx);
}
