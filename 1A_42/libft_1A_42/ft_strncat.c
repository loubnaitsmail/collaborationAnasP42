//
//  ft_strncat.c
//  
//
//  Created by ITSMAIL on 16/09/2020.
//

#include "libft.h"

char *ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
    size_t i;
    size_t j;
    
    i = 0;
    j = 0;
    while (s1[i])
        i++;
    while (s2[j] && j < n)
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
    return (s1);
}
