#######################################################
## ARGUMENTS

NAME		= ft_display_file
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

#######################################################
## SRCS & OBJS

FILES	= \
		ft_display_file \

SRCS	= $(addsuffix .c, $(FILES))
OBJS	= $(addsuffix .o, $(FILES))

#######################################################
## RULES

all : ${NAME}

${NAME} : ${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

$(OBJS): $(SRCS)
		${CC} ${CFLAGS} -c $< -o $@

clean :
		rm -f ${OBJS}

fclean : clean
		rm -f ${NAME}

re : fclean all

.PHONY: all clean fclean re
