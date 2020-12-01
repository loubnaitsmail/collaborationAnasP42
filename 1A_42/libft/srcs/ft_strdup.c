
#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *copy;
    int i;
    
    i = 0;
    if (s1 == 0)
	return (NULL);
    if (!(copy = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1)))
        return (NULL);
    while (s1[i])
    {
        copy[i] = s1[i];
        i++;
    }
    copy[i] = '\0';
    return (copy);
}
