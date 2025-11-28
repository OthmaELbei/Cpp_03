# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/25 14:09:31 by oelbied           #+#    #+#              #
#    Updated: 2025/11/27 17:39:04 by oelbied          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
FILES =  ClapTrap.cpp FragTrap.cpp main.cpp  ScavTrap.cpp DiamondTrap.cpp

OPJECT = $(FILES:.cpp=.o)

NAME = DiamondTrap

all : $(NAME)

$(NAME): $(OPJECT)
	$(CC) $(CFLAGS) $(OPJECT) -o $(NAME)

%.o: %.cpp  ClapTrap.hpp FragTrap.hpp ScavTrap.hpp DiamondTrap.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OPJECT)
fclean: clean
	rm -f $(NAME)

re: fclean all 