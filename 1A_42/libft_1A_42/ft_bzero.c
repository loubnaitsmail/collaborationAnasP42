
#include "libft.h"

void ft_bzero(void *str, size_t size)
{
    size_t i;
    unsigned char *copy;
    
    if (size == 0)
        return;
    i = 0;
    copy = str;
    while (i < size)
    {
        copy[i] = '0';
        i++;
    }
}
