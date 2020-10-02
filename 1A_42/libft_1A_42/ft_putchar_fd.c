//
//  main.c
//  ft_putchar_fd.c
//
//  Created by ITSMAIL on 18/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    if(fd < 0)
        return;
    write(fd, &c, 1);
}
