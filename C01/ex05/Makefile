# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achansar <achansar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/26 17:15:59 by achansar          #+#    #+#              #
#    Updated: 2023/07/26 20:11:36 by achansar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

#ARGUMENTS
CC = g++
FLAGS = -Wall -Werror -Wextra
F_V = -std=c++98
SRC =	main \
		Harl

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