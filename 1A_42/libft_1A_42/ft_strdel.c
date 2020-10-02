//
//  main.c
//  ft_strdel.c
//
//  Created by ITSMAIL on 15/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

void ft_strdel(char **as)
{
    if (as != NULL)
    {
        free(*as);
        *as = NULL;
    }
}
