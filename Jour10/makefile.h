//
//  makefile.h
//  Ex42_Day10
//
//  Created by ITSMAIL on 21/06/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

//OO Display_file
NAME = ft_display_file
SRCS = ft_display_file.c
OGJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all :   $(SRCS)
            $(CC) -c $(CFLAGS) $(SRCS)
            $(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean :
        $(RM) $(OBJS)

fclean :   clean
                $(RM) $(NAME)



