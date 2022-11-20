# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/12 20:13:43 by hbyeon            #+#    #+#              #
#    Updated: 2022/11/20 16:28:24 by hbyeon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = *.c

OBJS = ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o\
	   ft_isprint.o ft_strlen.o ft_tolower.o ft_toupper.o\
	   ft_strchr.o ft_strncmp.o ft_strlcpy.o ft_bzero.o\
	   ft_atoi.o ft_strlcat.o ft_memset.o ft_strnstr.o\
	   ft_strncmp.o ft_strrchr.o ft_calloc.o ft_strdup.o\
	   ft_substr.o ft_strjoin.o ft_memmove.o ft_memcpy.o\
	   ft_memchr.o ft_memcmp.o ft_itoa.o ft_strmapi.o\
	   ft_striteri.o ft_putchar_fd.o ft_putstr_fd.o\
	   ft_putendl_fd.o ft_putnbr_fd.o ft_strtrim.o\
	   ft_split.o
	   
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): $(OBJS)
		ar rc ${NAME} ${OBJS}

all: ${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all