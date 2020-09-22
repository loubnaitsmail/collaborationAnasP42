//
//  ft_strlcat.c
//  
//
//  Created by ITSMAIL on 16/09/2020.
//

#include "libft.h>
//à mieux comprendre, ft_strlen replace

size_t ft_strlcat(char *restrict dest, const char *restrict src, size_t destsize)
{
    size_t i;
    size_t y;
    
    i = ft_strlen(dest);
    y = 0;
    if (i < destsize)
    {
        while (src[y] && i < destsize - 1) //pk -1
        {
            dest[i] = src[y];
            i++;
            y++;
        }
        dest[i] = '\0';
    }
    if (ft_strlen(dest) > destsize)
        return (destsize + ft_strlen(src));
    else
        return(strlen(dest) + ft_strlen(src)); //ce cas ne fonctionne pas ?
}
