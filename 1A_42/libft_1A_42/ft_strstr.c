//
//  main.c
//  ft_strstr.c
//
//  Created by ITSMAIL on 18/09/2020.
//  Copyright © 2020 ITSMAIL. All rights reserved.
//

#include "libft.h"

char    *ft_strstr(const char *str, const char *to_find)
{
    int    i;
    int j;

    i = 0;
    if (!*to_find)
        return ((char *)(str));
    while (str[i])
    {
        j = 0;
        if (str[i + j] == to_find[j])
        {
            while (to_find[j] && str[i + j] == to_find[j])
                j++;
            if (!to_find[j])
                return ((char *)(&str[i]));
        }
        i++;
    }
    return (NULL);
}
