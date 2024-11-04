NAME		=	libftprintf.a

CC			=	cc

CFLAGS		=	-Wall -Werror -Wextra

SRCS		=	libftprintf.c

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
