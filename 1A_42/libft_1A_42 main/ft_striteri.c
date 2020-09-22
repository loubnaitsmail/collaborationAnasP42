//
//  main.c
//  ft_striteri.c
//
//  Created by ITSMAIL on 15/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

void ft_striteri(char *s, void(*f)(unsigned int, char *))
{
    unsigned int i;
    
    i = 0;
    if(!s || !f)
        return;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}

int main(int argc, const char * argv[]) {
    
    return 0;
}
