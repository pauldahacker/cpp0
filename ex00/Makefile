# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pde-masc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/29 13:58:43 by pde-masc          #+#    #+#              #
#    Updated: 2024/07/29 14:02:16 by pde-masc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CC = g++
FLAGS = -Wall -Wextra -Werror

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

BROWN =	\033[38;2;184;143;29m
ORANGE = \033[38;5;209m
BLUE = \033[0;94m
DEF_COLOR = \033[0;39m
GREEN =	\033[0;92m

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJ)
	@echo "$(GREEN)$(NAME) compiled succesfully!$(DEF_COLOR)"

%.o: %.cpp
	@echo "$(BROWN)Compiling   ${BLUE}→   $(ORANGE)$< $(DEF_COLOR)"
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	@echo "$(BROWN)Successfully removed objects!$(DEF_COLOR)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(BROWN)Successfully removed binaries!$(DEF_COLOR)"

re: fclean all

.PHONY: all clean fclean re

