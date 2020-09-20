//
//  main.c
//  ft_striter.c
//
//  Created by ITSMAIL on 15/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

void ft_striter(char *s, void (*f)(char *))
{
    int i;
    
    i = 0;
    if (!s || !f)
        return;
    while (s[i])
    {
        f(&s[i]);
        i++;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
