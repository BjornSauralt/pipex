NAME 		= pipex
CC 			= gcc
CFLAGS 		= -Wall -Wextra -Werror
LIB 		= libft/libft.a
SRC 		= src/pipex.c \
			src/pipex_utils.c \

OBJ 		= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIB)
	cp $(LIB) $(NAME)
	ar rs $(NAME) $(OBJ)

$(LIB):
	$(MAKE) -C $$(dirname $@)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) clean -C $$(dirname $(LIB));
	rm -f $(OBJ)

fclean: clean
	rm -f $(LIB)
	rm -f $(NAME)

re: fclean all

.PHONY:		all clean fclean re