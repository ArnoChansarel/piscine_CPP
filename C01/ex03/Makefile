# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achansar <achansar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/25 16:04:15 by achansar          #+#    #+#              #
#    Updated: 2023/07/25 17:05:03 by achansar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fight

#ARGUMENTS
CC = g++
FLAGS = -Wall -Werror -Wextra
F_V = -std=c++98
SRC =	main \
		HumanA \
		HumanB \
		Weapon

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