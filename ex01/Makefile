# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achansar <achansar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 15:55:04 by achansar          #+#    #+#              #
#    Updated: 2023/07/22 15:23:59 by achansar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

#ARGUMENTS
CC = g++
FLAGS = -Wall -Werror -Wextra
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
	@ $(CC) $(FLAGS) $(INC) $(OBJ) -o $(NAME)

.c.o:
	@ $(CC) $(FLAGS) $(INC) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re