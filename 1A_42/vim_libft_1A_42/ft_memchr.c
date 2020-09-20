//
//  main.c
//  ft_memchr.c
//
//  Created by ITSMAIL on 09/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

void *ft_memchr(const void *src, int c, size_t size)
{
    size_t i;
    
    i = 0;
    while (i < size)
    {
        if(((char *)src)[i] == (char)c)
            return (void *)(src + i);
        i++;
    }
    return (NULL);
}

int main(int argc, const char * argv[]) {
    
    char *src = "hello";
    char *dest = ft_memch(src, 'l', sizeof(src));
    printf("%s", dest);
    
    return 0;
}
