# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/22 14:29:28 by adi-fort          #+#    #+#              #
#    Updated: 2023/03/01 14:00:43 by adi-fort         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
SRCS = ft_itoa_ex_p.c ft_printf.c ft_putnbr_ret.c ft_putstring.c ft_putchar_ret.c ft_putstr_ret.c ft_itoa.c ft_itoa_ex.c ft_utilities.c map_reader.c ft_exadecimal.c ft_pointer.c ft_itoa_u.c get_next_line.c ft_strlen.c draw_map.c main.c 
OBJ		= ${SRCS:.c=.o}
FLAGS	= -Wall -Werror -Wextra
OPTIONS	= -c
CC		= gcc
RM		= rm -f

%.o: %.c
	$(CC) -Wall -Wextra -Werror -Imlx -c $< -o $@

$(NAME): ${OBJ}
	@make -C ./mlx
	@cp ./mlx/libmlx.dylib .
	$(CC) $(OBJ) -L . -lmlx -framework OpenGL -framework AppKit -o $(NAME)

all: ${NAME}

clean:
	@make -C ./mlx clean
	${RM} ${OBJ}

fclean: clean
	rm -rf libmlx.dylib
	${RM} ${NAME}

re: fclean all

