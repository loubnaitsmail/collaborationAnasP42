//
//  main.c
//  ft_strequ.c
//
//  Created by ITSMAIL on 16/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#inclure "libft.h"

int ft_strequ(char const *s1, char const *s2)
{
    if (ft_strcmp(s1, s2) == 0)
        return (1);
    return (0);
}

int main(int argc, const char * argv[]) {
    char *s1 = "hello";
    char *s2 = "hello";
    printf("%d\n", ft_strequ(s1, s2));
    return 0;
}
