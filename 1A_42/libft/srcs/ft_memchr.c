
#include "libft.h"

void *ft_memchr(const void *src, int c, size_t size)
{
    size_t i;
    
    i = 0;
    while (i < size)
    {
        if(((unsigned char *)src)[i] == (unsigned char)c)
            return (void *)(src + i);
        i++;
    }
    return (NULL);
}
