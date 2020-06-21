//
//  makefile.c
//  Ex42_Day09
//
//  Created by ITSMAIL on 21/06/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

/*

NAME = libft.a
 
FOLDER = ./srcs/
 
HEADER = ./includes/
 
SRCS = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

OBJS = $(SRCS : .c=.o)         //Compile les fichiers .c en .o. U
 
CC = gcc
 
CFLAGS = -Wall -Wextra -Werror
 
all : $(NAME)
 
$(NAME) : $(OBJS)
          $(CC) -o $(CFLAGS) $(NAME) $(HEADER) $(OBJS) 

clean :
        /bin/rm -f *.o
 
fclean :
        /bin/rm -f $(NAME)
 
re:
        fclean all

*/
