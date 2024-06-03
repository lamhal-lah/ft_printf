# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lamhal <lamhal@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 14:13:52 by lamhal            #+#    #+#              #
#    Updated: 2023/12/04 18:46:22 by lamhal           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra

SRC = ft_putchar.c ft_putstr.c ft_put_unsg.c ft_putnbr.c ft_puthexa.c \
	  ft_put_hxupr.c ft_put_hxlwr.c ft_putaddr.c ft_printf.c 

OBJ = $(SRC:.c=.o)

all: $(NAME)



$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c ft_printf.h
	$(CC) -o $@ -c $< $(CFLAGS)

	
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: clean
