#include <unistd.h>

int	main(int ac, char **av)
{
	int last;
	int	i;

	last = ac - 1;
	i = 0;
	if (ac < 2)
		write(1, "\n", 1);
	else
	{
		while (av[last][i])
		{
			write(1, &av[last][i], 1);
			i++;
		}
	}
	return (0);
}
