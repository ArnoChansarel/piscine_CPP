# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achansar <achansar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/18 13:12:37 by achansar          #+#    #+#              #
#    Updated: 2023/12/27 12:01:30 by achansar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

#ARGUMENTS
CC = g++
FLAGS = -Wall -Werror -Wextra
F_V = -std=c++98
SRC =	main \
		Animal \
		Cat \
		Dog \
		WrongAnimal \
		WrongCat

INC = #-I includes/
CPP_FILES = $(SRC:=.cpp)
OBJ = $(SRC:=.o)

#RULES
all: $(NAME)

$(NAME): $(OBJ)
		@ $(CC) $(FLAGS) $(F_V) $(INC) $(OBJ) -o $(NAME)

.cpp.o:
		@ $(CC) $(FLAGS) $(F_V) $(INC) -c $< -o $@

clean:
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re