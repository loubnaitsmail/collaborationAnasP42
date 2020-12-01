#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	char	*copy;

	if (!(copy = malloc(size * count)))
		return (NULL);
	ft_memset(copy, 0, count * size);
	return (copy);
}
