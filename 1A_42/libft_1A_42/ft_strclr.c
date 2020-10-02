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
