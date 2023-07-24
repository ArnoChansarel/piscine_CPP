# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achansar <achansar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/22 17:36:45 by achansar          #+#    #+#              #
#    Updated: 2023/07/24 19:00:35 by achansar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = log

#ARGUMENTS
CC = g++
FLAGS = -Wall -Werror -Wextra
F_V = #-std=c++98
SRC =	srcs/Account \
		srcs/tests

CPP_FILES = $(SRC:=.cpp)
OBJ = $(SRC:=.o)

#RULES
all: $(NAME)

$(NAME): $(OBJ)
	@ $(CC) $(FLAGS) $(F_V) $(OBJ) -o $(NAME)

.c.o:
	@ $(CC) $(FLAGS) $(INC) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re