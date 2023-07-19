SRCS	=	ft_putchar.c ft_putnbr.c ft_putstr.c ft_printf.c \
		ft_putunsignednbr.c ft_pointer.c \
		ft_hexadecimal.c


OBJSRCS	=	$(SRCS:.c=.o)

CC	=		gcc
CFLAGS	=	-Wall -Wextra -Werror -I.

NAME	=	libftprintf.a

all : 		$(NAME)

$(NAME)	:	$(OBJSRCS)
			ar rcs $(NAME) $(OBJSRCS)

clean:
			rm -f $(OBJSRCS)

fclean	:	clean
			rm -f $(NAME)

re	:		fclean all

.PHONY	:	all clean fclean re

