# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/15 09:59:24 by cedmulle          #+#    #+#              #
#    Updated: 2024/02/15 11:39:04 by cedmulle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= horde
SRC_DIR	= src/
SRC		= $(SRC_DIR)main.cpp \
		  $(SRC_DIR)Zombie.cpp \
		  $(SRC_DIR)zombieHorde.cpp
INC_DIR	= inc/
OBJ		= $(SRC:.cpp=.o)
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -I$(INC_DIR)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

leaks: $(NAME)
	@leaks --atExit -- ./$(NAME) "10" "john"
