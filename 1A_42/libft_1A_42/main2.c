//
//  main2.c
//  
//
//  Created by ITSMAIL on 27/09/2020.
//

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>
#include <string.h>


int    get_next_line(int const fd, char **line)
{
    char buff_all[1000];
    int read_return;
    int i = 0;
    char *tmp;

    tmp = malloc(sizeof(char) * 1000);
    read_return =  read(fd, buff_all, 1000);
   //PKKKKKK on ne peut pas copier char par char dans line ????
    while (buff_all[i] != '\n' && buff_all[i] != '\0')
       {
           tmp[i] = buff_all[i];
           i++;
       }
    tmp[i] = '\0';
    *line = tmp;
    
    
     printf("read_return = %d\n", read_return);
     printf("line = %s\n", *line);
     printf("buff_all = %s\n", buff_all);
    
    return (0);

}

int main()
{
    char *line;
    line = malloc(sizeof(char) * 1000);

    int const fd = open("test.txt", O_RDONLY);
    get_next_line(fd, &line);
    get_next_line(fd, &line);

    return(0);
}
