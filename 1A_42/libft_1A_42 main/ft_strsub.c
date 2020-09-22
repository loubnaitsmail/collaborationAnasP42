//
//  main.c
//  ft_strsub.c
//
//  Created by ITSMAIL on 18/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char *copy;
    unsigned int i;
    
    i = 0;

    if ((!s) || (!(copy = (char *) malloc(sizeof(char) * len + 1))))
        return (NULL);
    while (s[i] )
    {
        copy[i] = s[i + start];
        i++;
    }
    copy[i] = '\0';
    return (copy);
}

int main(int argc, const char * argv[]) {
    char *s = NULL;
    printf("%s\n", ft_strsub(s, 2, 1));
    return 0;
}
