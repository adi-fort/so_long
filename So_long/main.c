#include "printf.h"
//#include "get_next_line_.h"
#include <mlx.h>

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

int main(int ac, char	**av)
{
	t_game	img;

	
	img.mlx = mlx_init();
	//img.img = mlx_new_image(mlx,1920, 1080);
	img.mlx_win = mlx_new_window(img.mlx, 1920, 1080, "Hello, World!");
	mlx_loop(img.mlx);
	//img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_lenght, &img.endian);
}
