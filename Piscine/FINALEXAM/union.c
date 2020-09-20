#include <unistd.h>

int verif(char *str, char current, int index)
{
	int i;

	i = 0;
	while (str[i] && i < index)
	{
		if (str[i] == current)
			return (0);
		i++;
	}
	return (1);
}
int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac != 3)
		write(1, "\n", 1);
	else 
	{
		while (av[1][i])
		{
			if (verif(av[1], av[1][i], i))
				write(1, &av[1][i], 1);
			i++;
		}
		i = 0;
		while(av[2][i])
		{
			if (verif(av[1], av[2][i], i) && verif(av[2], av[2][i], i))
				write(1, &av[2][i], 1);
			i++;
		}	
		write(1, "\n", 1);
	}
	return (0);
}
