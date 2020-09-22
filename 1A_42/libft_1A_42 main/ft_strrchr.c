//
//  main.c
//  ft_strrchr.c
//
//  Created by ITSMAIL on 18/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    
    i = 0;
    while (s[i])
        i++;
    while (i >= 0)
    {
        if(s[i] == (char)c)
            return ((char *)(s + i));
        i--;
    }
    return (NULL);
}

int main(int argc, const char * argv[]) {

    char *s = "healloao";
    int c  = 'a';
    printf("%s\n", ft_strrchr(s, c));
    printf("%s\n", strrchr(s, c));

    return 0;
}
