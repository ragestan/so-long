NAME=so_long
SRC = main.c\
	get_next_line/get_next_line.c \
	get_next_line/get_next_line_utils.c \
	ft_split.c \
	utils.c \
	error.c\
	error2.c\
	check.c\
	check2.c\
	ft_printf/ft_printf.c \
	ft_printf/ft_putchar.c \
	ft_printf/ft_putnbr_a.c \
	ft_printf/ft_putnbr_u.c \
	ft_printf/ft_putnbr_x.c \
	ft_printf/ft_putnbr_xx.c\
	ft_printf/ft_putnbr.c \
	ft_printf/ft_putstr.c \
	draw.c \
	move.c \
	utlis2.c \

OBJ=$(SRC:.c=.o)

all:	$(NAME)

$(NAME) : ${OBJ}
	$(CC) $(OBJ)  -lmlx -framework OpenGL -framework AppKit -o $(NAME) 

clean:	
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re: fclean all
 
.PHONY: all clean fclean re