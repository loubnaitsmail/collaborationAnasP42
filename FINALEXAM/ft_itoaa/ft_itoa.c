#include<stdlib.h>
#include<stdio.h>

char *ft_itoa(int nbr)
{
	long nb;
	long tmp;
	int size;
	char *result;
	char *base;
	int neg;


	nb = (long)nbr;
	base = "0123456789";
	neg = 1;
	tmp = 10;
	size = 1;
	if (nb < 0)
	{
		nb = -nb;
		neg++;
	}
	while (tmp <= nb)
	{
		tmp *= 10;
		size++;
	}
	size = size + neg;
	if(!(result = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	result[size] = '\0';
	if(neg > 0)
		result[0] = '-';
	while ((size - 1) > neg)
	{
		result[size - 1] = base[nb % 10];
		nb /= 10;
		size--;
	}
	return (result);
}

int main(int ac, char **av)
{
	(void)ac;
	printf("%s", av[1]);

}
