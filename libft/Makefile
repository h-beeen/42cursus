# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/12 20:13:43 by hbyeon            #+#    #+#              #
#    Updated: 2022/11/16 19:44:21 by hbyeon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = *.c

OBJS = ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o\
	   ft_isprint.o ft_strlen.o ft_tolower.o ft_toupper.o\
	   ft_strchr.o ft_strncmp.o ft_strlcpy.o ft_bzero.o\
	   ft_atoi.o ft_strlcat.o ft_memset.o\
	   
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