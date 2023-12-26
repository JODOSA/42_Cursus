LIB = ar rcs
RM = rm -f

CC = gcc
CCFLAGS = -Wall -Werror -Wextra

NAME = libft.a
SRC = ft_isalpha.c ft_isdigit.c
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