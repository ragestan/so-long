NAME=so_long
NAME_B=so_long_bonus
SRC = main.c\
	get_next_line.c \
	get_next_line_utils.c \
	ft_split.c \
	utils.c \
	error.c\
	error2.c\
	check.c\
	check2.c\
	ft_printf.c \
	ft_putchar.c \
	ft_putnbr_a.c \
	ft_putnbr_u.c \
	ft_putnbr_x.c \
	ft_putnbr_xx.c\
	ft_putnbr.c \
	ft_putstr.c \
	draw.c \
	move.c \
	utlis2.c \

BONUS_SRC = bonus/ft_split_bonus.c \
	get_next_line.c \
	get_next_line_utils.c \
	bonus/draw_bonus.c \
	bonus/move_bonus.c \
	bonus/utlis2_bonus.c \
	bonus/utils_bonus.c \
	bonus/error_bonus.c \
	bonus/error2_bonus.c \
	bonus/check_bonus.c \
	bonus/check2_bonus.c \
	bonus/help_bonus.c \
	bonus/enm_bonus.c \
	bonus/main_bonus.c \
	bonus/collec_bonus.c \
	bonus/help_collec_bonus.c\
	bonus/help_enm_bonus.c\
	bonus/test.c\
	bonus/norm_bonus.c\

CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJ=$(SRC:.c=.o)

OBJ_B=${BONUS_SRC:.c=.o}

all:	$(NAME)

$(NAME) : $(OBJ)
	$(CC) ${OBJ}  -lmlx -framework OpenGL -framework AppKit -o $(NAME) 

bonus: $(NAME_B)

$(NAME_B) :	$(OBJ_B) 
	${CC} ${CFLAGS}	${OBJ_B}  -lmlx -framework OpenGL -framework AppKit -o ${NAME_B}

clean:	
	$(RM) $(OBJ) $(OBJ_B)
fclean: clean
	$(RM) $(NAME) $(NAME_B)
re: fclean all
 
.PHONY: all clean fclean re