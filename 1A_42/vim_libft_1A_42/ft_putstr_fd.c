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
    if(!s)
        return;
    write(fd, &*s, ft_strlen(s));
}
