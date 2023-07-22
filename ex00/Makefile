# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achansar <achansar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/13 15:34:02 by achansar          #+#    #+#              #
#    Updated: 2023/07/13 15:38:19 by achansar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

#ARGUMENTS
CC = g++
FLAGS = -Wall -Werror -Wextra
SRC =	megaphone
CPP_FILES = $(SRC:=.cpp)
OBJ = $(SRC:=.o)

#RULES
all: $(NAME)

$(NAME): $(OBJ)
	@ $(CC) $(FLAGS) $(OBJ) -o $(NAME)

.c.o:
	@ $(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re