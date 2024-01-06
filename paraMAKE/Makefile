# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joadomin <joadomin@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/29 12:06:41 by joadomin          #+#    #+#              #
#    Updated: 2024/01/06 19:31:23 by joadomin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Name or the program
NAME = libft.a

#All thw files of the functions

SRCS =	ft_isalpha.c \
		ft_isdigit.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_memset.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_memmove.c \

#Convert functions (*.c) to objets (*.o)
OBJS = $(SRCS:.c=.o)

#The command compile the functions
CC = gcc

#The compilations flags
CFLAGS = -Wall -Wextra -Werror

#Rules ---------------------------------------------------------------------------------

#You enter make or make all it will carry out these instructions
#It will compile the functions and create the library with ar, c->create r->replace s->make 
all: $(NAME)

$(NAME): $(OBJS) 
		ar rcs $(NAME) $(OBJS)

#Delete all *.o files created in the process
clean:
	rm -rf $(OBJS)

#First delete the *.o and then delete the program
fclean: clean
	rm -f $(NAME)

#It will delete the program an the *.o and then run the process again
re: fclean all

.PHONY: all clean fclean re

