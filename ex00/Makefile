# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/03 14:09:31 by aisidore          #+#    #+#              #
#    Updated: 2025/06/10 17:44:00 by aisidore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = claptrap

FLAGS = -Wall -Wextra -Werror -I. -std=c++98

SRC = src/main.cpp src/ClapTrap.class.cpp

OBJ = objets/main.o objets/ClapTrap.class.o

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