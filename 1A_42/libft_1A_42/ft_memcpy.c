
#include "libft.h"

void *ft_memcpy(void *restrict dest, const void *restrict src, size_t size)
{
    size_t i;

    i = 0;
    if(!src)
        return (NULL);
    while (i < size)
    {
        ((char *)dest)[i] = ((char *)src)[i];
        i++;
    }
    return (dest);
}
