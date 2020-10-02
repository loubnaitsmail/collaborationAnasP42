

INCLUDES	=	libft.h

SRCS	=  ft_memcmp.c ft_putstr.c ft_striteri.c ft_strrchr.c ft_bzero.c \
ft_memcpy.c ft_putstr_fd.c ft_strjoin.c ft_strsplit.c ft_isalnum.c ft_memdel.c \
ft_strcat.c ft_strlcat.c ft_strstr.c ft_isalpha.c ft_memmove.c ft_strchr.c ft_strlen.c \
ft_strsub.c ft_isascii.c ft_memset.c ft_strclr.c ft_strmap.c ft_strtrim.c ft_isdigit.c \
ft_puchar_fd.c ft_strcmp.c ft_strmapi.c ft_tolower.c ft_isprint.c ft_putchar.c ft_strcpy.c \
ft_strncat.c ft_toupper.c ft_itoa.c ft_putendl.c ft_strdel.c ft_strncmp.c ft_memalloc.c \
ft_putendl_fd.c ft_strdup.c ft_strncpy.c ft_memccpy.c ft_putnbr.c ft_strequ.c ft_strnequ.c \
ft_memchr.c ft_putnbr_fd.c ft_striter.c ft_strnew.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC	= gcc

RM = rm - f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c -I${INCLUDES} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}
			

all:		${NAME}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re

		
	
