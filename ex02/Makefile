# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achansar <achansar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/22 17:36:45 by achansar          #+#    #+#              #
#    Updated: 2023/07/22 17:38:35 by achansar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = log

#ARGUMENTS
CC = g++
FLAGS = -Wall -Werror -Wextra
SRC =	Account \
		tests

# INC = -I includes/
CPP_FILES = $(SRC:=.cpp)
OBJ = $(SRC:=.o)

#RULES
all: $(NAME)

$(NAME): $(OBJ)
	@ $(CC) $(FLAGS) $(INC) $(OBJ) -o $(NAME)

.c.o:
	@ $(CC) $(FLAGS) $(INC) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re