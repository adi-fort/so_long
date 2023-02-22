#ifndef SO_LONG_H
# define SO_LONG_H

typedef struct	s_game {
	void	*img;
	void	*mlx;
	void	*mlx_win;
//	char	*addr;
	char	**map;

//	int		bits_per_pixel;
	int		line_lenght;
	int		line_width;
//	int		endian;
}				t_game;

#endif
