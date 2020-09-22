//
//  main.c
//  tolower.c
//
//  Created by ITSMAIL on 14/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
      return (c + 32);
    else
        return (c);
}
