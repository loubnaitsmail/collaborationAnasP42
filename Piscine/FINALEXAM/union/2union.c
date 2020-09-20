#include <unistd.h>
#include <string.h>
int check_double(char *str, char c, int index)
{
	int i;
	i = 0;
	while (str[i] && i < index)
	{
		if (c == str[i])
			return(0);
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	int i;
	int j;

	i = 0;

	if (ac != 3)
		write(1, "\n", 1);
	else
	{
		while (av[1][i])
		{
			if (check_double(av[1], av[1][i], i))
				write(1, &av[1][i], 1);
			i++;
		}
		j = 0;
		while(av[2][j])
		{
			if (check_double(av[1], av[2][j], strlen(av[1])) && check_double(av[2], av[2][j], j))
				write(1, &av[2][j], 1);
			j++;
		}
		write(1, "\n", 1);
	}
	return(0);
}
