# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/04 11:35:59 by pablalva          #+#    #+#              #
#    Updated: 2024/10/08 13:10:35 by pablalva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf.a

FLAG = -Wall -Werror -Wextra

CFILES = ft_toupperstr.c ft_strlen.c ft_putstr.c ft_putnbrnu.c ft_putnbr.c ft_putchar.c\
		ft_hexadec.c ft_pointer_hex.c 

OBJS = $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)

		ar rcs $(NAME) $(OBJS)
%.o: %.c
		cc $(FLAG) -c $< -o $@

clean:
		rm -f $(OBJS)
		
fclean:
		rm -f $(NAME)
		
re: fclean all

.PHONY: all clean fclean re
		
