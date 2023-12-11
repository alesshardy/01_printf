# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apintus <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 17:16:05 by apintus           #+#    #+#              #
#    Updated: 2023/12/11 15:12:12 by apintus          ###   ########.fr        #
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

CC = cc
RM = rm -f
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror 
NAME = libftprintf.a

########################################################
## RULES

all:	$(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

clean:	
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
