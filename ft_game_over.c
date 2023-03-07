/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game_over.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:14:17 by adi-fort          #+#    #+#             */
/*   Updated: 2023/03/07 17:42:54 by adi-fort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_game_win(t_game *game)
{
	ft_free_map(game);
	write(1, "Congratulations!\n'I have to go powder my nose'.-Mia Wallace", 60);
	exit (0);
}

void		ft_game_over(t_game *game)
{
	ft_free_map(game);
	write(1, "Game over!\nI promise I won't laugh.— Vincent", 44);
	exit (0);
}
