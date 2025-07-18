# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/03 14:09:31 by aisidore          #+#    #+#              #
#    Updated: 2025/07/18 15:46:34 by aisidore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fragtrap

FLAGS = -Wall -Wextra -Werror -I. -std=c++98

SRC = src/main.cpp src/ClapTrap.cpp src/FragTrap.cpp src/ScavTrap.cpp

OBJ = objets/main.o objets/ClapTrap.o objets/FragTrap.o objets/ScavTrap.o

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

objets/%.o: src/%.cpp
	mkdir -p objets
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -f objets/*.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re