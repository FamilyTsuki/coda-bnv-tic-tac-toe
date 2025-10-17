# Makefile

NAME = tic_tac_toe

SRCS = main.c \
	ia_debiles.c \
	affichage.c \
	victoir.c

all: $(NAME)

$(NAME): $(SRCS)
	gcc $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all