//
//  main.c
//  Ex42_Day09
//
//  Created by ITSMAIL on 17/06/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "lib_ft.h"

//00 lib_ft.c
void ft_puchar(char c)
{
    write(1, &c, 1);
}

void ft_swap(int *a, int *b)
{
    int swap;
    swap = *a;
    *a = *b;
    *b = swap;
}

void ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
        i++;
    
    return i;
}

int ft_strcmp(char *s1, char *s2)
{
    if (ft_strlen(s1) > ft_strlen(s2))
        return 1;
    else if (ft_strlen(s1) < ft_strlen(s2))
        return -1;
    else
        return 0;
}


//03 ????
char **ft_split(char *str, char *charset)
{
    int lent;
    char **splitted;
    
    lent = ft_strlen(str) + ft_strlen(charset);
    
    if (!(splitted = malloc(sizeof(char) * lent + 1)))
        return NULL;
    
    
    
    return splitted;
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    return 0;
}
