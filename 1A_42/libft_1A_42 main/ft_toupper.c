//
//  main.c
//  toupper.c
//
//  Created by ITSMAIL on 14/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
      return (c - 32);
    else
        return (c);
}

int main(int argc, const char * argv[]) {

    int c = 'j';
    printf("%c\n", toupper(c));
    printf("%c\n", ft_toupper(c));

    return 0;
}
