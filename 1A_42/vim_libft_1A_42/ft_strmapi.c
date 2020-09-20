//
//  main.c
//  ft_strmapi.c
//
//  Created by ITSMAIL on 16/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *str;
    
    i = 0;
    if(!s || !f)
        return (NULL);
    str = ft_strnew(ft_strlen(s));
    while (s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}

int main(int argc, const char * argv[]) {

    return 0;
}
