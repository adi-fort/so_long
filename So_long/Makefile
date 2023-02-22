# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/22 14:29:28 by adi-fort          #+#    #+#              #
#    Updated: 2023/02/22 15:02:35 by adi-fort         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
SRCS = ft_printf.c ft_putnbr_ret.c ft_putstring.c ft_putchar_ret.c ft_putstr_ret.c ft_itoa.c ft_itoa_ex.c ft_utilities.c ft_exadecimal.c ft_pointer.c ft_itoa_u.c get_next_line.c ft_strlen.c ft_printf.c ft_strlen.c 
OBJ		= ${SRCS:.c=.o}
FLAGS	= -Wall -Werror -Wextra
OPTIONS	= -c
CC		= gcc ${FLAGS}
RM		= rm -f

%.o: %.c
	$(CC) -Wall -Wextra - Werror -lmlx -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(OBJ) -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)

all: ${NAME}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all

