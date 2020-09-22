#include "libft.h"

//char ou unsigned char
void *ft_memset (void *p, int value, size_t size)
{
    size_t i;
    unsigned char *dest;
    
    i = 0;
    dest = (unsigned char *) p;
    while (i < size)
        dest[i++] = (unsigned char) value;
    
    return (p);
}
