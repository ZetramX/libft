# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vimartin <vimartin@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/04 10:20:07 by vimartin          #+#    #+#              #
#    Updated: 2023/03/16 22:57:57 by vimartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

AR = ar
ARFLAGS = crs

CC = gcc
CFLAG = -Wall -Wextra -Werror

RM = rm
RMFLAG = -f

INCLUDES = ./libft.h

SRC_PART1 = \
	./ft_isdigit.c	\
	./ft_isalpha.c	\
	./ft_isprint.c	\
	./ft_isascii.c	\
	./ft_isalnum.c	\
	./ft_strlen.c	\
	./ft_memset.c	\
	./ft_bzero.c	\
	./ft_memcpy.c	\
	./ft_memmove.c	\
	./ft_strlcpy.c	\
	./ft_strlcat.c	\
	./ft_toupper.c	\
	./ft_tolower.c	\
	./ft_strchr.c	\
	./ft_strrchr.c	\
	./ft_strncmp.c	\
	./ft_memchr.c	\
	./ft_memcmp.c	\
	./ft_strnstr.c	\
	./ft_atoi.c	\
	./ft_calloc.c	\
	./ft_strdup.c

SRC = \
	$(SRC_PART1)

OBJS = $(SRC:.c=.o)

all : $(NAME)

clean :
	$(RM) $(RMFLAG) $(OBJS)

fclean : clean
	$(RM) $(RMFLAG) $(NAME)

re : fclean all

.c.o : $(SRC) $(INCLUDES)
	$(CC) $(CFLAG) -c $< -o $(<:.c=.o)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

.PHONY : all clean fclean re
