# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achansar <achansar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 15:55:04 by achansar          #+#    #+#              #
#    Updated: 2023/07/24 18:57:12 by achansar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

#ARGUMENTS
CC = g++
FLAGS = -Wall -Werror -Wextra
F_V = #-std=c++98
SRC =	srcs/main \
		srcs/PhoneBook \
		srcs/searchContact \
		srcs/Contact

INC = -I includes/
CPP_FILES = $(SRC:=.cpp)
OBJ = $(SRC:=.o)

#RULES
all: $(NAME)

$(NAME): $(OBJ)
	@ $(CC) $(FLAGS) $(F_V) $(INC) $(OBJ) -o $(NAME)

.c.o:
	@ $(CC) $(FLAGS) $(F_V) $(INC) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re