# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/15 15:52:47 by cedmulle          #+#    #+#              #
#    Updated: 2024/02/15 15:54:54 by cedmulle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= violence
SRC_DIR	= src/
INC_DIR	= inc/
SRC		= $(SRC_DIR)HumanA.cpp \
			$(SRC_DIR)HumanB.cpp \
			$(SRC_DIR)Weapon.cpp \
			$(SRC_DIR)main.cpp
OBJ		= $(SRC:.cpp=.o)
CC		= c++
CFL		= -Wall -Wextra -Werror -std=c++98
RM		= rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFL) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CFL) -I $(INC_DIR) -o $@ -c $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
