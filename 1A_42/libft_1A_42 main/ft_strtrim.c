//
//  main.c
//  ft_strtrim.c
//
//  Created by ITSMAIL on 18/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

char *ft_strtrim(char const *s)
{
    size_t start;
    size_t last;
    
    if (!s)
        return (NULL);
    start = 0;
    last = ft_strlen(s) - 1;
    while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
        start++;
    if (s[start] == '\0')
        return (ft_strdup(s + start));
    while ((s[last] == ' ' || s[last] == '\n' || s[last] == '\t') && last > 0)
        last--;
    return (ft_strsub(s, start, last - start + 1));
}

int main(int argc, const char * argv[]) {
    char *s = " hello \n\n ";
    printf("%s\n", ft_strtrim(s));
    return 0;
}
