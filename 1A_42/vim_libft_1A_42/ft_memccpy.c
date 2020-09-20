//
//  main.c
//  ft_memccpy.c
//
//  Created by ITSMAIL on 09/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

void *ft_memccpy(void *restrict dest, const void *restrict src, int c , size_t size)
{
    size_t i;
    
    i = 0;
    while (i < size)
    {
        ((char *)dest)[i] = ((char *)src)[i];
        if (((char *)dest)[i] == (char)c)
            return ((void *)(dest +i + 1));
        i++;
    }
    return (NULL);
}

int main(int argc, const char * argv[]) {
    char *src = "hello";
    char *dest = NULL;
    int i;
    dest = (char *)malloc(sizeof(src));
    ft_memccpy(dest, src, 'l', sizeof(src));
    printf( "%s", dest);
    printf( "\n" );
        return 0;
}
