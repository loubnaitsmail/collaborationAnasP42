//
//  main.c
//  Ex42_Day10
//
//  Created by ITSMAIL on 21/06/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include <stdio.h>
#include <fcntl.h>   //open read close
#include <unistd.h>  //write
#include <errno.h>   //strerror
#include <string.h>  //erno
#include <libgen.h>  //basename

//OO Display_file

void ft_putstr(char *str, int std)
{
    while (*str)
    {
        write(std, str, 1);
        str++;
    }
}

void ft_display_file (const char *str)
{
    int fd;
    char buffer;
    
    fd = open(str, O_RDONLY);
    
    if (fd == -1)
    {
        ft_putstr("Cannot read file.\n", 2);
        return;
    }
    
    while (read(fd, &buffer, 1) != 0)
        ft_putstr(&buffer, 1);
        //write(1, &buffer, 1);
    
    if (close(fd) == -1)
        return;
}

//02 cat basename? 
void ft_cat(int fd)
{
    char buffer;
    
    while(read(fd, &buffer, 1))
    ft_putstr(&buffer, 1);
    
}

void diplay_file_cat(char *str)
{
    int fd;
    
    fd = open(str, O_RDONLY);
    if (fd == -1)
    {
        ft_putstr(strerror(errno), 2);
        return;
    }
    
    ft_cat(fd);
    
    if (close(fd) == -1)
    {
        ft_putstr(strerror(errno), 2);
        return;
    }
    
}




int main(int argc, const char * argv[]) {
    //00 test ft_display_fle
    if (argc < 2)
        ft_putstr("File name missing.\n", 2);

    else if (argc > 2)
        ft_putstr("Too many argiments.\n", 2);
    
    else ft_display_file(argv[1]);
    
    return 0;
}
