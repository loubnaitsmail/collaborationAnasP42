//
//  main.c
//  isalnum.c
//
//  Created by ITSMAIL on 14/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

int ft_isalnum(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
        return (1);
    else
        return (0);
}

int main(int argc, const char * argv[]) {

    int c = 'h';
    printf("%d\n", isalnum(c));
    printf("%d\n", ft_isalnum(c));

    return 0;
}
