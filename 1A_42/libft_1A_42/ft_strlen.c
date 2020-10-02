//
//  ft_strlen.c
//  
//
//  Created by ITSMAIL on 16/09/2020.
//

#include "libft.h"

size_t ft_strlen(const char *s)
{
    size_t len;
    
    len = 0;
    while(s[len])
        len++;
    return(len);
}
