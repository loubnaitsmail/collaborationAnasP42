//
//  main.c
//  ft_memalloc.c
//
//  Created by ITSMAIL on 14/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

void *ft_memalloc(size_t size)
{
    void *str;
    if (!(str =  malloc(size)))
        return (NULL);
    
    ft_bzero(str, size);
    return (str);
}
