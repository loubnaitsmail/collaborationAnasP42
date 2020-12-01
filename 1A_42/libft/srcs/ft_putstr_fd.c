
#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    //à tester
    int i;
    
    i = 0;
    if (fd < 0 || !s)
        return;
    while (s[i])
    {
        ft_putchar_fd(s[i], fd);
        i++;
    }
}
