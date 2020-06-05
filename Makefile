# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/05 10:32:23 by tcoetzee          #+#    #+#              #
#    Updated: 2020/06/05 10:55:31 by tcoetzee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = libft.a

GCC = gcc -Wall -Werror -Wextra
SOURCES = ft_putchar.c ft_putstr.c
OBJECTS = $(patsubst %.c, %.o, $(SOURCES))
HEADERS = libft.h get_next_line.h
HEADERS_PATH = ./includes

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

$(OBJECTS): $(SOURCES)
	$(GCC) -c $^ -I $(HEADERS_PATH)

clean:
	rm -f $(OBJECTS)

fclean:
	rm -f $(NAME)

re: fclean all