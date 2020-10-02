//
//  main.c
//  ft_memmove.c
//
//  Created by ITSMAIL on 09/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

void *ft_memove(void *dest, const void *src, size_t size)
{
    size_t i;
    char *destination;
    char *source;
    
    i = 0;
    destination = (char *)dest;
    source = (char *)src;
    while (i < size)
    {
        destination[i] = source[i];
        i++;
    }
    return (dest);
}
