# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 12:10:56 by jemorais          #+#    #+#              #
#    Updated: 2024/11/04 13:07:18 by jemorais         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

CC			=	cc

CFLAGS		=	-Wall -Werror -Wextra

SRCS		=	ft_printf.c

HEADER		=	ft_printf.h

AR			=	ar rcs

RM			=	rm -rf

OBJS		=	$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)

%.o: %.c $(HEADER)
		$(CC) $(CFLAGS) -c $< -o $@
		$(AR) $(NAME) $@

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

 .PHONY: all clean fclean re
