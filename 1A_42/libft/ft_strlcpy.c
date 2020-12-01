
#include "libft.h"

size_t ft_strlcpy(char * restrict dest, const char * restrict src, size_t destsize)
{
	size_t i;
	size_t lent;

	i = 0;
	lent = 0;
	while (src[i] && i + 1 < destsize)
	{
		dest[i] = src[i];
		i++;
	}
	if (destsize > 0)
		dest[i] = '\0';
	while (src[lent])
		lent++;
	return (lent);
}
