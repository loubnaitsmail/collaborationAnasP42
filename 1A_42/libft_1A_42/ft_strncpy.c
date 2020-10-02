//
//  ft_strncpy.c
//  
//
//  Created by ITSMAIL on 16/09/2020.
//

#include "libft.h"

char *ft_strncpy(char *dest, const char *src, size_t len)
{
    size_t i;
    
    i = 0;
    while (src[i] && i < len)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
