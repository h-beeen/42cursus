# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbyeon <hbyeon@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/23 10:07:33 by hbyeon            #+#    #+#              #
#    Updated: 2022/11/23 11:22:30 by hbyeon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
	   ft_isprint.c ft_strlen.c ft_tolower.c ft_toupper.c\
	   ft_strchr.c ft_strncmp.c ft_strlcpy.c ft_bzero.c\
	   ft_atoi.c ft_strlcat.c ft_memset.c ft_strnstr.c\
	   ft_strncmp.c ft_strrchr.c ft_calloc.c ft_strdup.c\
	   ft_substr.c ft_strjoin.c ft_memmove.c ft_memcpy.c\
	   ft_memchr.c ft_memcmp.c ft_itoa.c ft_strmapi.c\
	   ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c\
	   ft_putendl_fd.c ft_putnbr_fd.c ft_strtrim.c\
	   ft_split.c
	   
SRCS_2 = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c

OBJS = $(SRCS:.c=.o)

OBJS_2 = $(SRCS_2:.c=.o)

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
		$(RM) $(OBJS) $(OBJS_2)

fclean: clean
		$(RM) $(NAME) $^

bonus: $(OBJS) $(OBJS_2)
	   ar rc $(NAME) $^

re: fclean all

.PHONY : all clean fclean re