//
//  main.c
//  ft_strnequ.c
//
//  Created by ITSMAIL on 18/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
    if (ft_strncmp(s1, s2, n) == 0)
        return (1);
    return (0);
}

int main(int argc, const char * argv[]) {
    char *s1 = "hello";
    char *s2 = "hello";
    printf("%d\n", ft_strnequ(s1, s2, 4));
    return 0;
}
