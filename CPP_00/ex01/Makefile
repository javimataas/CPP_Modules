# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/16 18:16:44 by jmatas-p          #+#    #+#              #
#    Updated: 2023/09/18 17:13:29 by jmatas-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98

GREEN		=		\033[0;32m
RED			=		\033[0;31m
END			=		\033[0m

SRC =   phonebook.cpp contact.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

NAME = phonebook

all: $(NAME)
	
$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)$(NAME) compiled$(END)"


%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

bonus: $(BONUS)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)$(NAME) deleted$(END)"

re: fclean all

.PHONY: all clean fclean re