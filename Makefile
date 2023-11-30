# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apintus <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 17:16:05 by apintus           #+#    #+#              #
#    Updated: 2023/11/28 14:37:39 by apintus          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#######################################################
## SOURCES

SRCS =	ft_printf.c\
		ft_putchar.c\
		ft_putstr.c\
		ft_utils.c\

OBJS =	$(SRCS:.c=.o)

#######################################################
## ARGUMENTS

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I. 
NAME = libftprintf.a

########################################################
## RULES

all:	$(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

clean:	
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
