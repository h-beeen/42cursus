# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/23 10:07:33 by hbyeon            #+#    #+#              #
#    Updated: 2023/01/14 21:43:17 by hbyeon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c ft_printargs.c

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -c -Wall -Wextra -Werror
AR = ar -rcs
RM = rm -f


all :		$(NAME)

bonus :
			make BONUS=1 all

$(NAME) :	$(OBJS)
			$(AR) $(NAME) $(OBJS)

.c.o :
			$(CC) $(CFLAGS) $< -o $@ -I ft_printf.h

clean :
			$(RM) $(OBJS)

fclean : clean
			$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re bonus