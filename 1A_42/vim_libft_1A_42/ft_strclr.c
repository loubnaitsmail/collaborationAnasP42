//
//  main.c
//  ft_strclr.c
//
//  Created by ITSMAIL on 15/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

void ft_strclr(char *s)
{
    while (*s)
    {
        *s = '\0';
        s++;
    }
}

int main(int argc, const char * argv[]) {
    char str[6] = "hello";
    ft_strclr(str);
    printf("%s\n", str);
    return 0;
}
