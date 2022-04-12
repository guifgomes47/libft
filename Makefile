SRC = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_bzero.c \
	ft_memset.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr


OBJ = ${SRC:.c=.o}
NAME = libft.a
%.o: %.c
	gcc -Wall -Werror -Wextra -c $< -o $@
${NAME}: ${OBJ}
	ar rc ${NAME} ${OBJ}
all: ${NAME}

clean:
	rm -rf ${OBJ}
fclean: clean
	rm -rf libft.a
re: fclean all