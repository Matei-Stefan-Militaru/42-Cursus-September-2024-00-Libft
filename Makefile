NAME = libft.a
CFLAGS = cc -Werror -Wextra -Wall
FILES_C = $(wildcard *.c)
OBJECTS = $(FILES_C:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	$(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
