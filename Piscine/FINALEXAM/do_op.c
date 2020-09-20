#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int calcul(int a, int b, char op)
{
	if (op == '+')
		return (a + b);
	else if (op == '-')
		return (a - b);
	else if (op == '*')
		return (a * b);
	else if (op == '/')
		return (a / b);
	else if (op == '%')
		return (a % b);
	return (0);
}

int main(int ac, char **av)
{
	int	result;

	result = 0;
	if (ac != 4)
		write(1, "\n", 1);
	else 
	{
		result = calcul(atoi(av[1]), atoi(av[3]), *av[2]);
		printf("%d\n", result);

	}
	return(0);
}
