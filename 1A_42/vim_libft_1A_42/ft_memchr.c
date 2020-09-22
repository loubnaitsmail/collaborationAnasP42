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
