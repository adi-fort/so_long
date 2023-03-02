#ifndef SO_LONG_H
# define SO_LONG_H

# include <mlx.h>
# include "ft_printf.h"
# include "get_next_line.h"


typedef struct	s_game { //nome della struttura creata
	void	*mlx; //puntatore a una cosa importante(senza non parte)
	void	*mlx_win; //puntatore alla finestra di gioco
	char	**map; //mappa bellebbuona
	void	*player; //immagine del giocatore
	int		fd;
	int		line_lenght;
	int		pi; //posizione sulle ascisse del giocatore
	int		pj;	//posizione sullórdinata del giocatore
	void	*wall;
	void	*exit;
	void	*door;
	void	*mushroom;
	int		line_width;
	void	*texture; //scacchiera
	int		counter; //contatore di collezionabili
}				t_game;

void	printf_mat(char **strs);
void	map_reader(t_game *game);
void	player_img(t_game *game);
void	texture_img(t_game *game);
void	wall_img(t_game *game);
void	map_malloc(t_game *game);
void	mushroom_img(t_game *game);
void	exit_img(t_game *game);
int		key_hook(int key, t_game *game);
void	open_door(t_game *game);

#endif


