
#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t size)
{
    size_t i;
    char *destination;
    char *source;
    
//ajouter cas dst < src et !dst !src ?

    i = 0;
    destination = (char *)dest;
    source = (char *)src;
    while (i < size)
    {
        destination[i] = source[i];
        i++;
    }
    return (dest);
}
