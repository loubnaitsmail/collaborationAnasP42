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
