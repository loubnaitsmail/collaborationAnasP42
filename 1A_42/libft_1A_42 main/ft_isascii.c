//
//  main.c
//  isascii.c
//
//  Created by ITSMAIL on 14/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    else
        return (0);
}

int main(int argc, const char * argv[]) {

    int c = '#';
    printf("%d\n", isascii(c));
    printf("%d\n", ft_isascii(c));

    return 0;
}
