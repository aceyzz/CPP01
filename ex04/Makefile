# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/16 14:23:01 by cedmulle          #+#    #+#              #
#    Updated: 2024/02/16 16:18:58 by cedmulle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= replace
SRC_DIR	= src/
SRC		= $(SRC_DIR)main.cpp \
		  $(SRC_DIR)Sed.cpp
INC_DIR	= inc/
INC		= $(INC_DIR)Sed.hpp \
		  $(INC_DIR)tools.hpp
CXX		= c++
CFL		= -Wall -Wextra -Werror -std=c++98
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CFL) -o $(NAME) $(OBJ)

%.o: %.cpp $(INC)
	$(CXX) $(CFL) -c $< -o $@ -I $(INC_DIR)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
	rm -rf *.replace

re: fclean all
