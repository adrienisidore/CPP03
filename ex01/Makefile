# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/03 14:09:31 by aisidore          #+#    #+#              #
#    Updated: 2025/06/10 17:44:43 by aisidore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = scavtrap

FLAGS = -Wall -Wextra -Werror -I. -std=c++98

SRC = src/main.cpp src/ClapTrap.cpp src/ScavTrap.cpp

OBJ = objets/main.o objets/ClapTrap.o objets/ScavTrap.o

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