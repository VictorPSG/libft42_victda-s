NAME = libft.a

SRC = ft_isalpha.c \
	ft_isdigit.c

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME):
	gcc -c $(FLAGS) -o $(NAME) $(SRC)
	gcc -c $(FLAGS) $(SRC)

clean:
	/bin/rm -f ft_display_file.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
