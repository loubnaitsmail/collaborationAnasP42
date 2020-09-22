//
//  main.c
//  isdigit.c
//
//  Created by ITSMAIL on 14/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

int ft_isdigit(int c)
{
    if (c >= '0' && c<= '9')
        return (1);
    else
        return (0);
}
