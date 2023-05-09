# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/09 20:32:49 by hbyeon            #+#    #+#              #
#    Updated: 2023/05/09 20:32:50 by hbyeon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAMEC = client
NAMES = server

SRCC_FILE = client.c
SRCS_FILE = server.c

SRCC = $(SRCC_FILE)
SRCS = $(SRCS_FILE)

OBJC = ${SRCC_FILE:.c=.o}
OBJS = ${SRCS_FILE:.c=.o}

CC			= cc
CFLAGS		= -Wall -Werror -Wextra
Includes = -I includes
RM = rm -rf

all:	$(NAMEC) $(NAMES)

$(NAMEC) : $(OBJC)
		$(CC) $(CFLAGS) $(OBJC) $(Includes) -o $(NAMEC)

$(NAMES) : $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) $(Includes) -o $(NAMES)

clean :
		${RM} ${OBJC}
		${RM} ${OBJS}

fclean : clean
		${RM} $(NAMEC)
		${RM} $(NAMES)

re : fclean all

.PHONY:		all clean fclean re