
#include "libft.h"

char *ft_itoa(int n)
{
    char *result;
    int size;
    int tmp;
    long nbr;
    int i;
    char *base;
    
    nbr = n;
    tmp = 10;
    size = 1;
    base = "0123456789";
    if (nbr < 0)
    {
        nbr = -nbr;
        size++;
    }
    while (tmp <= nbr)
    {
        tmp *= 10;
        size++;
    }
    if (!(result = (char *)malloc(sizeof(char) * (size + 1))))
        return (NULL);
    result[size] = '\0';

    i = size - 1;
    while (i > 0)
    {
        result[i] = base[nbr % 10];
        nbr /= 10;
        i--;
    }
    if (nbr == 0)
        result[0] = '-';
    else
        result[0] = base[nbr];
    return (result);
}
