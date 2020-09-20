//
//  main.c
//  isdigit.c
//
//  Created by ITSMAIL on 14/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

int ft_isdigit(int c)
{
    if (c >= '0' && c<= '9')
        return (1);
    else
        return (0);
}

int main(int argc, const char * argv[]) {

    int c = '8';
    printf("%d\n", isdigit(c));
    printf("%d\n", ft_isdigit(c));
    return 0;
}
