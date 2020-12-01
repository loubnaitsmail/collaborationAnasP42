//
//  main.c
//  gnl_anas
//
//  Created by ITSMAIL on 02/10/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#define BUFF_SIZE 60

int get_contains_index(char *str, char c)
{
    int i = 0;
    while (str[i])
    {
        if(str[i] == c)
            return(i);
        i++;
    }
    return(-1);
}

int separate(char **line, char *save_buf, int index, int s2)
{
    int s;
    char *tmp1;
    char *tmp2;
    
    s = 0;
    s2 = 0;
    tmp1 = malloc(index + 1);
    tmp2 = malloc(strlen(save_buf) - index);
    while (save_buf[s])
    {
        if (index > s)
            tmp1[s] = save_buf[s];
        else if (index == s)
            tmp1[s] = '\0';
        else
            tmp2[s2++] = save_buf[s];
        s++;
    }
    tmp2[s2] = '\0';
    *line = tmp1;
    save_buf = realloc(save_buf, strlen(tmp2) + 1);
    strcpy(save_buf, tmp2);
    return(1);
}

void read_funct(char *buf, char **save_buf, long int read_return)
{
    int len;
    buf[read_return] = '\0';
    if (*save_buf == NULL)
        *save_buf = malloc(BUFF_SIZE + 1);

    else if (*save_buf != NULL)
    {
        len = strlen(*save_buf);
        *save_buf = realloc(*save_buf, read_return + len + 1);
    }
    strcat(*save_buf, buf);
}

int rest_to_print(char **save_buf, int index,char ***line)
{
    if (*save_buf != NULL)
    {
        index = get_contains_index(*save_buf, '\n');
        if (index != -1) //si save_buf contient \n
            return(separate(*line, *save_buf, index, 0));
        else
        {
            **line = *save_buf;
            *save_buf = NULL;
        }
    }
    if (**line == NULL)
    {
        **line = malloc(1); //ft_memalloc
        **line[0] = '\0';
    }
    return 0;
}

int get_next_line(const int fd, char **line)
{
    static char buf[BUFF_SIZE];
    long long int read_return;
    static char *save_buf;
    int index;
    
    *line = NULL;
    if (fd < 0 || !line || read(fd, buf, 0) == -1)
        return (-1);
    while ((read_return = read(fd, buf, BUFF_SIZE)) > 0)
    {
        read_funct(buf, &save_buf, read_return);
        index = get_contains_index(save_buf, '\n');
        if (index != -1) //si save_buf contient \n
            return (separate(line, save_buf, index, 0));
    }
    return (rest_to_print(&save_buf, index, &line));
}

int main(int argc, const char * argv[]) {
    
    int fd = open("test.txt", O_RDONLY);
    char *line;
    int result;

    result = get_next_line(fd, &line);
    printf("*Result 1 : %s\n\n", line);

    result = get_next_line(fd, &line);
    printf("*Result 2 : %s\n\n", line);

    result = get_next_line(fd, &line);
    printf("*Result 3 : %s\n\n", line);
    
    result = get_next_line(fd, &line);
    printf("*Result 4 : %s\n\n", line);
    
    result = get_next_line(fd, &line);
    printf("*Result 5 : %s\n\n", line);
    
    //result = get_next_line(fd, &line);
    //printf("result 4 : %s\n\n", line);

    return 0;
}

