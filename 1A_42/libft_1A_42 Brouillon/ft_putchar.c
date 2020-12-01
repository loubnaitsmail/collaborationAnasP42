//
//  main.c
//  ft_putchar.c
//
//  Created by ITSMAIL on 18/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
}
