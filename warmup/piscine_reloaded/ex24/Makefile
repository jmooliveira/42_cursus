# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/07 11:52:02 by jemorais          #+#    #+#              #
#    Updated: 2024/10/07 12:57:50 by jemorais         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile libft.a

NAME		=	libft.a
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra
SRCS_FILES	=	srcs/ft_putchar.c srcs/ft_putstr.c ft_putstscmp.c srcs/ft_strlen.c srcs/ft_swap.c
HEADER		=	./includes/
AR			=	ar rc
RM			=	rm -rf
OBJS		=	$(SRCS:srcs/%.c=%.o)

all:	$(NAME)

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

$(OBJS): $(SRCS)
		$(CC) $(CFLAGS) -c $(SRCS) -I $(HEADER)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

 .PHONY: all clean fclean re
