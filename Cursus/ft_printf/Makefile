# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: niperez <niperez@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/28 14:35:55 by niperez           #+#    #+#              #
#    Updated: 2024/05/28 14:36:07 by niperez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#######################################################
## ARGUMENTS

NAME		= libftprintf.a
CC			= cc
CFLAGS		= -Wall -Wextra -Werror

AR			= ar rc
RM			= rm -f

#######################################################
## SRCS & OBJS

FILES	= \
		ft_printf \
		ft_putchar \
		ft_print_c \
		ft_print_s \
		ft_print_p \
		ft_print_di \
		ft_print_u \
		ft_print_x \

SRCS	= $(addsuffix .c, $(FILES))
OBJS	= $(addsuffix .o, $(FILES))

#######################################################
## RULES

all : ${NAME}

${NAME} : ${OBJS}
		${AR} ${NAME} $?

bonus :

%.o : %.c
		${CC} ${CFLAGS} -c $< -o $@

clean :
		$(RM) ${OBJS}

fclean : clean
		$(RM) ${NAME}

re : fclean all

.PHONY: all clean fclean re
