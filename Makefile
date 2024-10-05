NAME = libft.a
CFLAGS = cc -Werror -Wextra -Wall
FILES_C = $(wildcard *.c)
OBJECTS = $(FILES_C:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
	echo "$(NAME) << CREATED SUCCESSFULLY >>"

%.o: %.c
	$(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)
	echo "$(OBJECTS) << SUCCESSFULLY REMOVED >>"

fclean: clean
	rm -f $(NAME)
	echo "$(NAME) y $(OBJECTS) << SUCCESSFULLY REMOVED >>"

re: fclean all

.PHONY: all clean fclean re
