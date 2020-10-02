//
//  ft_strdup.c
//  
//
//  Created by ITSMAIL on 16/09/2020.
//

#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *copy;
    int i;
    
    i = 0;
    if(!(copy = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1)))
        return (NULL);
    while (s1[i])
    {
        copy[i] = s1[i];
        i++;
    }
    copy[i] = '\0';
    return(copy);
}
