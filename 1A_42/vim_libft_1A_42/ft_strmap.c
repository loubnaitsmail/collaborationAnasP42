//
//  main.c
//  ft_strmap.c
//
//  Created by ITSMAIL on 15/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
    char *copy;
    int i;
    
    i = 0;
    if (!s || !f)
        return (NULL);
        
    copy = ft_strnew(ft_strlen(s));  //peut on utiliser sizeof(s)
    while (s[i])
    {
        copy[i] = f(s[i]); //ou *(f)(s[i]) ?
        i++;
    }
    copy[i] = '\0';
    return (copy);
}
