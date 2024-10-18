NAME = libft.a

SRC = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_bzero.c \
	ft_memset.c \
	ft_memcpy.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_memcmp.c \
	ft_atoi.c \

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	gcc -c $(FLAGS) $< -o $@

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
