# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/04 11:41:26 by tnicoue           #+#    #+#              #
#    Updated: 2022/02/01 12:11:08 by kcatrix          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME		= push_swap

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror 

SRC			= ${wildcard *.c}
OBJ			= ${SRC:.c=.o}

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): ${OBJ}
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -g

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
