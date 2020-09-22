//
//  main.c
//  isalpha.c
//
//  Created by ITSMAIL on 14/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

int ft_isalpha(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);
    else
        return (0);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int c = 'p';
    printf("%d\n", isalpha(c));
    printf("%d\n", ft_isalpha(c));

    return 0;
}
