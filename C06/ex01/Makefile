# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achansar <achansar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/28 20:11:31 by achansar          #+#    #+#              #
#    Updated: 2024/01/09 13:38:10 by achansar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serial

#ARGUMENTS
CC = c++
FLAGS = -Wall -Werror -Wextra -fsanitize=address -g
F_V = -std=c++98
SRC =	main \
		Serializer

INC = #-I includes/
CPP_FILES = $(SRC:=.cpp)
OBJ = $(SRC:=.o)

#RULES
all: $(NAME)

$(NAME): $(OBJ)
		@ $(CC) $(FLAGS) $(F_V) $(INC) $(OBJ) -o $(NAME)

clean:
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re