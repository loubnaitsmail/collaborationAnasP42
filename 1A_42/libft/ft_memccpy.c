
#include "libft.h"

void *ft_memccpy(void *restrict dest, const void *restrict src, int c , size_t size)
{
    size_t i;
    unsigned char *source;
    unsigned char *destination;

    i = 0;
    while (i < size)
    {
        destination[i] = source[i];
        if (source[i] == (unsigned char)c)
            return ((void *)(dest + i + 1));
        i++;
    }
    return (NULL);
}
