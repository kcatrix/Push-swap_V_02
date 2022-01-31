# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kevyn <kevyn@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/04 11:41:26 by tnicoue           #+#    #+#              #
#    Updated: 2022/01/17 20:36:50 by kevyn            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME		= push_swap

CC			= gcc
CFLAGS		= -Wall -Wextra 

SRC			= ${wildcard *.c}
OBJ			= ${SRC:.c=.o}

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): ${OBJ}
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
