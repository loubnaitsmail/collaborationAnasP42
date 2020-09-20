
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
        copy[i] = '0'; //ou \0 ?
        i++;
    }
 //ft_memset(str, '0', size);
}

int main(int argc, const char * argv[]) {

    char str[6] = "hello";
    size_t n = 3;
    printf("%s\n", str);
    //bzero(str, n);
    ft_bzero(str, n);
    printf("%s\n", str);

    return 0;
}
