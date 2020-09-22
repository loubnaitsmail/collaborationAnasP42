//
//  main.c
//  ft_memcmp.c
//
//  Created by ITSMAIL on 09/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *s1_copy;
    unsigned char *s2_copy;

    s1_copy = (unsigned char *)s1;
    s2_copy = (unsigned char *)s2;
    i = 0;
    
   
    while (i < n)
    {
        if (s1_copy[i] != s2_copy[i])
            return (s1_copy[i] - s2_copy[i]);
        i++;
    }
    return(0);
}

int main(int argc, const char * argv[]) {
    const void *s1 = "hello";
    const void *s2 = "hallo";

    printf("%d\n", memcmp(s1, s2, 6));
    printf("%d\n", ft_memcmp(s1, s2, 6));

    return 0;
}
