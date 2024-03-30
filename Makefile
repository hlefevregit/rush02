# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlefevre <hlefevre@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/22 21:05:28 by hlefevre          #+#    #+#              #
#    Updated: 2024/03/30 13:51:04 by hlefevre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

FILES =	./src/ft_atoi.c \
		./src/ft_putchar.c \
		./src/ft_putstr.c \
		./src/ft_split.c \
		./src/ft_strlen.c \
		./src/rush02.c \
		./src/ft_itoa.c \
		./src/ft_strerror.c \
		./src/print_nb.c \

OBJ = ${FILES:.c=.o}

FLAGS = -Wextra -Wall -Werror -fsanitize=address

all:	${NAME}

${NAME}: ${OBJ}
		gcc $(OBJ) $(FLAGS) -o $(NAME)

%o:	%.c
	gcc $(FLAGS) $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f *.out

re: fclean all

.PHONY: all clean fclean re