NAME = pipex

CC = gcc
CFLAGS = -Werror -Wall -Wextra
RM = rm -rf

SRCS = pipex.c pipex_utils.c
OBJS = $(SRCS:.c=.o)
LIBFT = libft/libft.a

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(LIBFT):
	make -C libft

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	make clean -C libft

fclean: clean
	$(RM) $(NAME)
	make fclean -C libft

re: fclean all
