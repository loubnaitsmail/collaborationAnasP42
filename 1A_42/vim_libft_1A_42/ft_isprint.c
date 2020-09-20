//
//  main.c
//  isprint.c
//
//  Created by ITSMAIL on 14/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return (1);
    else
        return (0);
}

int main(int argc, const char * argv[]) {

    int c = '\n';
    printf("%d\n", isprint(c));
    printf("%d\n", ft_isprint(c));

    return 0;
}
