#include "so_long.h"
#include "printf.h"
//#include "get_next_line_.h"
#include <mlx.h>


int main(int ac, char	**av)
{
	t_game	img;

	
	img.mlx = mlx_init();
	map_reader(img);
	//img.img = mlx_new_image(mlx,1920, 1080);
	img.mlx_win = mlx_new_window(img.mlx, 1920, 1080, "Hello, World!");
	mlx_loop(img.mlx);
	//img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_lenght, &img.endian);
}
