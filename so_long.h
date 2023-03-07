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
	int		p;
	int		e;
	int		line_lenght;
	int		pi; //posizione sulle ascisse del giocatore
	int		pj;	//posizione sullórdinata del giocatore
	int		moves;
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
void	map_check(t_game *game);
void	check_all(t_game *game);
void	check_player_exit(t_game *game);
void	check_map(t_game *game);  
void	ft_free_map(t_game *game);
void	ft_game_over(t_game *game);
void	ft_game_win(t_game *game);
#endif

