# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dprevost <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/11 15:26:36 by dprevost          #+#    #+#              #
#    Updated: 2018/08/11 15:34:16 by dprevost         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

SRC = main.c display.c

FLAGS = -Wextra -Werror -Wall

all : fclean $(NAME)

$(NAME) :
	 gcc -o $(NAME) $(SRC) $(FLAGS) -I ft_head.h
clean :
	 rm *.o
fclean : clean
	rm -f $(NAME)
