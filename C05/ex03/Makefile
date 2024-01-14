# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achansar <achansar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/26 15:38:48 by achansar          #+#    #+#              #
#    Updated: 2024/01/14 16:51:01 by achansar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat

#ARGUMENTS
CC = c++
FLAGS = -Wall -Werror -Wextra -fsanitize=address -g
F_V = -std=c++98
SRC =	main \
		Bureaucrat \
		AForm \
		ShrubberyCreationForm \
		RobotomyRequestForm \
		PresidentialPardonForm \
		Intern

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
		@rm Paradise_shruberry

re: fclean all

.PHONY: all clean fclean re