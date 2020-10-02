//
//  main.c
//  ft_putendl_fd.c
//
//  Created by ITSMAIL on 18/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

void ft_putendl_fd(char const *s, int fd)
{
    if (!s || !fd)
        return;
    write(fd, &*s, ft_strlen(s));
    write(fd, "\n", 1);
}
