# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbyeon <hbyeon@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 13:10:00 by hbyeon            #+#    #+#              #
#    Updated: 2023/05/03 13:10:27 by hbyeon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MINITALK			= minitalk

SERVER 				= server
CLIENT				= client

CC 					= gcc
CFLAGS				= -Wall -Werror -Wextra

INCFLAGS 			= -I./libft

LIBFT_PATH			= ./libft/
LIBFT_FILES 		= ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c \
					  ft_atoi.c ft_strdup.c ft_strlen.c ft_putstr_lf.c \
					  ft_charjoin.c ft_exception.c ft_kill.c
LIBFT_SRCS			= $(addprefix $(LIBFT_PATH), $(LIBFT_FILES))
LIBFT_OBJS			= $(LIBFT_SRCS:.c=.o)

SERVER_PATH			= ./ft_server/
SERVER_FILES 		= server.c server_handler.c
SERVER_SRCS			= $(addprefix $(SERVER_PATH), $(SERVER_FILES))
SERVER_OBJS			= $(SERVER_SRCS:.c=.o)

CLIENT_PATH			= ./ft_client/
CLIENT_FILES 		= client.c client_handler.c
CLIENT_SRCS			= $(addprefix $(CLIENT_PATH), $(CLIENT_FILES))
CLIENT_OBJS			= $(CLIENT_SRCS:.c=.o)


SERVER_OBJECTS	= $(SERVER_OBJS)
CLIENT_OBJECTS	= $(CLIENT_OBJS)


all: $(MINITALK)

.c.o:
	$(CC) $(CFLAGS) $(INCFLAGS) -c $< -o $@

$(SERVER): $(LIBFT_OBJS) $(SERVER_OBJECTS)
	$(CC) $(CFLAGS) $(INCFLAGS) $^ -o $@

$(CLIENT): $(LIBFT_OBJS) $(CLIENT_OBJECTS)
	$(CC) $(CFLAGS) $(INCFLAGS) $^ -o $@

$(MINITALK): $(SERVER) $(CLIENT)


re: fclean all

clean:
	$(RM) $(LIBFT_OBJS) $(SERVER_OBJS) $(CLIENT_OBJS)

fclean: clean
	$(RM) $(SERVER) $(CLIENT)

.PHONY: all re clean fclean
