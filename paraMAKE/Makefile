LIB = ar rcs
RM = rm -f

CC = gcc
CCFLAGS = -Wall -Werror -Wextra

NAME = libft.a
SRC = ft_isalpha.c ft_isdigit.c ft_bzero.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memcpy.c ft_memset.c ft_strlcpy.c ft_strlen.c ft_toupper.c ft_tolower.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c
OBJ = $(SRC:.c=.o)
INCLUDE = libft.h

all: $(NAME)

$(NAME): $(OBJ) 
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

%.o: %.c
		$(CC) $(CFLAGS) -c -o $@ $<

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all
