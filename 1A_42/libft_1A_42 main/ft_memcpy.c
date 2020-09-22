#include "libft.h"

void *ft_memcpy(void *restrict dest, const void *restrict src, size_t size)
{
    if(!src)
        return (NULL);

    // UTILISER UNE COPY?    
    //char *dest_copy;
    //const char *src_copy;
    size_t i;
    
    //dest_copy = (char *)dest;
    //src_copy = (const char *)src;
    i = 0;
    while (i < size)
    {
        ((char *)dest)[i] = ((char *)src)[i];
        i++;
    }
    return (dest);
}

int main(int argc, const char * argv[]) {
    
    char *src = "hello";
    char *dest = NULL;
    int length = sizeof(char) * 5;
    dest = (char *) malloc( length + 1 );
    ft_memcpy(dest, src, length); //sizeof(src)
    printf( "%s", dest);
    printf( "\n" );
        
    free(dest);
    return 0;
}
