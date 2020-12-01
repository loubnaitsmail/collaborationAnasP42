//
//  main.c
//  ft_putnbr.c
//
//  Created by ITSMAIL on 18/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

void ft_putnbr(int n)
{
    long nb;
    
    nb = n;
    if (nb < 0)
    {
        nb = -nb;
        write(1, "-", 1);
    }
    if (nb >= 10)
        ft_putnbr((int)(nb / 10));
    nb = nb % 10 + 48;
    write(1, &nb, 1);
}
