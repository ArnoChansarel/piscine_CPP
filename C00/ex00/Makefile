# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achansar <achansar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/13 15:34:02 by achansar          #+#    #+#              #
#    Updated: 2023/07/28 12:56:46 by achansar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

#ARGUMENTS
CC = g++
FLAGS = -Wall -Werror -Wextra
F_V = #-std=c++98
SRC =	megaphone
CPP_FILES = $(SRC:=.cpp)
OBJ = $(SRC:=.o)

#RULES
all: $(NAME)

$(NAME): $(OBJ)
	@ $(CC) $(FLAGS) $(F_V) $(OBJ) -o $(NAME)

.cpp.o:
	@ $(CC) $(FLAGS) $(F_V) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re