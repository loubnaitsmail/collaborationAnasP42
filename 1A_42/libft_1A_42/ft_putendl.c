//
//  main.c
//  ft_putendl.c
//
//  Created by ITSMAIL on 18/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

void ft_putendl(char const *s)
{
    int i;
    
    i = 0;
    while (s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
    write(1, "\n", 1);
}
