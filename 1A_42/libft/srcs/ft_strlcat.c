
#include "libft.h"

size_t ft_strlcat(char *restrict dest, const char *restrict src, size_t size)
{
    size_t i;
    size_t y;
    size_t size_dest;
    
    size_dest = ft_strlen(dest);
    i = size_dest;
    y = 0;
    if (i < size)
    {
        while (src[y] && i < size - 1) //pk -1
        {
            dest[i] = src[y];
            i++;
            y++;
        }
        dest[i] = '\0';
    }
    if (size < size_dest)
        return (size + ft_strlen(src));
    else
        return (size_dest + ft_strlen(src)); 
	//ce cas ne fonctionne pas ? voir slack/Day3 ex5
}
