/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:16:51 by adi-fort          #+#    #+#             */
/*   Updated: 2023/03/06 17:52:09 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int ac, char	**av)
{
	t_game	img;

	img.moves = 0;
	ac = 0;
	av = 0;
		//dichiaro una struttura di tipo game (definita nel .h)

	img.mlx = mlx_init(); //dentro la struttura img, vado a prendere mlx, definito nel .h e lo associo alla funzione definita in mlx per far partire il gioco.
	map_reader(&img); //la funzione map_reader prende un puntatore a struttura e gli passo dunque l'indirizzo di memoria di img. la funzione map_reader
	map_check(&img);
	map_malloc(&img);
	img.mlx_win = mlx_new_window(img.mlx, (img.line_lenght -1)* 50, (img.line_width-1) * 50, "so_long");
	texture_img(&img);
	wall_img(&img);
	player_img(&img);
	mushroom_img(&img);
	exit_img(&img);
//	printf_mat(img.map);
	mlx_key_hook(img.mlx_win, key_hook, &img);
//	printf("%d\n", img.moves);
//	if (img.counter == 0)
//		open_door(&img);
	mlx_loop(img.mlx);
}
