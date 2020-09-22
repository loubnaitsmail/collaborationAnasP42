//
//  main.c
//  ft_strchr.c
//
//  Created by ITSMAIL on 18/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;
    
    i = 0;
    while (s[i])
    {
        if (s[i] == (char)c)
            return ((char *)(s + i));
        i++;
    }
    return (NULL);
}

int main(int argc, const char * argv[]) {

    char *s = "hello";
    int c = 'l';
    
    printf("%s\n", ft_strchr(s, c));
    printf("%s\n", strchr(s, c));

    return 0;
}
