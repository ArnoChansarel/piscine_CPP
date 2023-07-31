# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achansar <achansar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/25 18:52:07 by achansar          #+#    #+#              #
#    Updated: 2023/07/30 14:27:22 by achansar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed

#ARGUMENTS
CC = g++
FLAGS = -Wall -Werror -Wextra
F_V = -std=c++98
SRC =	main 

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