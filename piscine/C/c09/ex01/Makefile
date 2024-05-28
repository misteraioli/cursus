#######################################################
## ARGUMENTS

NAME		= libft.a
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

#######################################################
## SRCS & OBJS

PATH_FILES = srcs/

FILES	= \
		ft_putchar \
		ft_swap \
		ft_putstr \
		ft_strlen \
		ft_strcmp \

SRCS	= $(addsuffix .c, $(addprefix $(PATH_FILES),$(FILES)))
OBJS	= $(addsuffix .o, $(addprefix $(PATH_FILES),$(FILES)))

#######################################################
## INCLUDES

PATH_INCLUDES = includes/
HEADERS += -I $(PATH_INCLUDES)

#######################################################
## RULES

all : ${NAME}

${NAME} : ${OBJS}
		ar rc ${NAME} ${OBJS}

$(OBJS): $(SRCS)
		${CC} ${CFLAGS} ${HEADERS} -c $< -o $@

clean :
		rm -f ${OBJS}

fclean : clean
		rm -f ${NAME}

re : fclean all

.PHONY: all clean fclean re
