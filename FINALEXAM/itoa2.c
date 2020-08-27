/*Écrire une fonction qui prend un int et le convertit en chaîne terminée par un
caractère nul. Cette fonction retourne le résultat en tant qu'un tableau de
char que vous devez allouer.

Votre fonction sera déclarée comme suit:*/

#include<stdio.h>
#include<stdlib.h>

char	*ft_itoa(int nb)
{
	int size; 
	char *result;
	long tmp;
	int i;
	char *base;
	long nbr;

	if(nb == 0)
	{
		return (result = "0");
	}
	nbr = (long)nb;
	base = "0123456789";
	size = 1;
	if (nbr < 0)
	{
		nbr = -nbr;
		size++;
	}
	tmp = 10;
	while (tmp <= nbr)
	{
		tmp = tmp * 10;
		size++;
	}
	if(!(result = malloc(sizeof(char) * (size + 1))))
		return (NULL);	
	result[size] = '\0';
	i = size - 1;
	while(i > 0)
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

#include <stdlib.h>

int main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_itoa(atoi(av[1])));
}
