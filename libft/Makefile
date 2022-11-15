# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbyeon <hbyeon@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/12 20:13:43 by hbyeon            #+#    #+#              #
#    Updated: 2022/11/15 16:17:47 by hbyeon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = *.c

OBJS = ${SRCS:.c=.o}

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