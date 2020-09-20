//
//  main.c
//  ft_strnew.c
//
//  Created by ITSMAIL on 15/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

char *ft_strnew(size_t size)
{
    char *str;
    int i;
    
    i = 0;
    if(!(str = (char *)malloc(sizeof(char) * size + 1)))
        return NULL;
    
    while (i <= size)
    {
        str[i] = '\0'; //0 ou \0
        i++;
    }
    return (str);
}

int main(int argc, const char * argv[]) {
    
    printf("%s\n", ft_strnew(4));
    return 0;
}
