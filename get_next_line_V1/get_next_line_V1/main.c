//
//  main.c
//  get_next_line_V1
//
//  Created by ITSMAIL on 21/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

#define BUFF_SIZE 42

int ft_new_line(char **s, char **line, int fd)
{
    int len;
    char *tmp;
    
    len = 0;
    while (s[fd][len] != '\n' && s[fd][len] != '\0')
        len++;
    if (s[fd][len] == '\n')
    {
        *line = ft_strsub(s[fd], 0, len);
        tmp = ft_strdup(s[fd] + len + 1);
        free(s[fd]);
        s[fd] = tmp;
        if (s[fd][0] == '\0')
            ft_strdel(&s[fd]); //free
    }
    else //s[fd][len] == '\0'
    {
        *line = ft_strdup(s[fd]);
        ft_strdel(&s[fd]); //free
    }
    return (1);
}

int get_next_line(const int fd, char **line)
{
    int read_return;
    char buffer[BUFF_SIZE + 1];
    static char *s[256];
    char *tmp;
    
    if (fd < 0 || !line )
        return (-1);
    
    if (!(read_return = read(fd, buffer, BUFF_SIZE) > 0))
    {
        buffer[read_return] = '\0';
        //if (s[fd] == NULL)
            //?
        tmp = s[fd];
        s[fd] = ft_strjoin(tmp, buffer);
        free(tmp);
    }
    
    if (read_return < 0)
        return (-1);
    else if (read_return == 0 && (!s[fd] || s[fd][0] == '\0'))
        return (0);
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
