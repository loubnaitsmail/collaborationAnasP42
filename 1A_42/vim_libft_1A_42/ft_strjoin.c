//
//  main.c
//  ft_strjoin.c
//
//  Created by ITSMAIL on 18/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *concat;
    int i;
    int j;
    
    i = 0;
    j = 0;
    if (!s1 || !s2)
    return (NULL);
    if(!(concat = (char *) malloc(sizeof(char) * (ft_strlen(s2) + ft_strlen(s1) + 1))))
        return (NULL);
    while (s1[i])
    {
        concat[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        concat[i] = s2[j];
        i++;
        j++;
    }
    concat[i] = '\0';
    return (concat);
}

int main(int argc, const char * argv[]) {
    char *s1 ="hello";
    char *s2 = "wold";
    printf("%s\n", ft_strjoin(s1, s2));
    return 0;
}
