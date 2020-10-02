//
//  main.c
//  ft_memdel.c
//
//  Created by ITSMAIL on 14/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

void ft_memdel(void **ap)
{
    if (ap != NULL)
    {
        free(*ap);
        *ap = NULL;
    }
}
