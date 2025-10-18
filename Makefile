# Makefile

NAME = tic-tac-toe

SRCS = main.c \
	ia_debiles.c \
	ia_inteligente.c \
	affichage.c \
	victoir.c 

all: $(NAME)

$(NAME): $(SRCS)
	gcc $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all