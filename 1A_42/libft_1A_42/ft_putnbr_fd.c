//
//  main.c
//  ft_putnbr_fd.c
//
//  Created by ITSMAIL on 18/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    long long nbr;
    
    nbr = n;
    if (nbr < 0)
    {
        nbr = -nbr;
        write(fd, "-", 1);
    }
    if (nbr >= 10)
        ft_putnbr_fd((int)nbr / 10, fd);
    nbr = nbr % 10 + 48;
    write(fd, &nbr, 1);
}
