NAME		=	ft_printf.a

CC			=	cc

CFLAGS		=	-Wall -Werror -Wextra

SRCS		=	ft_printf.c

SRCS_BONUS	=

HEADER		=	ft_printf.h

AR			=	ar rcs

RM			=	rm -rf

OBJS		=	$(SRCS:.c=.o)

OBJS_BONUS	=	$(SRCS_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)

%.o: %.c $(HEADER)
		$(CC) $(CFLAGS) -c $< -o $@
		$(AR) $(NAME) $@

bonus: $(OBJS_BONUS)

clean:
		$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

 .PHONY: all bonus clean fclean re
