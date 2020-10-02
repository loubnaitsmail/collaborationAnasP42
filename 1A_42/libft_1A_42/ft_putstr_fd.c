//
//  main.c
//  ft_putstr_fd.c
//
//  Created by ITSMAIL on 18/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

void ft_putstr_fd(char const *s, int fd)
{
    //à tester
    int i;
    
    i = 0;
    if (fd < 0 || !s)
        return;
    while (s[i])
    {
        ft_putchar_fd(s[i], fd);
        i++;
    }
}
