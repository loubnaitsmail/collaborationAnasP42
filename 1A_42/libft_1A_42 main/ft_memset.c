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

int main(int argc, const char * argv[]) {
    
    int tab[] = {4, 5, 6};
    size_t size = sizeof(int) * 3;
    int i;
  
    for(i = 0; i < 3; i++)
        printf("%d ", tab[i]);
    //memset(tab, 1, size);
    printf( "\n" );
    ft_memset(tab, 6, size);
    for(i = 0; i < 3; i++)
        printf("%d ", tab[i]);
    return 0;
}
