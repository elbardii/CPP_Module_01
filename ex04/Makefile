# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iel-bard <iel-bard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/22 04:45:00 by iel-bard          #+#    #+#              #
#    Updated: 2026/01/22 04:45:00 by iel-bard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	sed

CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98

SRCS		=	main.cpp

OBJS		=	$(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o:		%.cpp
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
