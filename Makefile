NAME	= libftprintf.a

CC		= cc
CFLAGS	= -Wall -Wextra -Werror
AR		= ar rcs
RM		= rm -f

SRC		= ft_printf.c ft_hex_low.c ft_hex_up.c ft_percent.c \
		  ft_putchar.c ft_putnbr.c ft_putstr.c \
		  ft_putunbr.c ft_putvoid.c

OBJ		= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re