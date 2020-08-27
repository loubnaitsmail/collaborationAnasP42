/*Écrire un programme qui prend un entier positif en argument et affiche la somme
de tous les nombres premiers inférieurs ou égaux à ce paramètre, suivie d'un
\n.

Si le nombre d'arguments n'est pas 1, ou que l'argument n'est pas positif,
afficher 0 et un \n.

Oui, les exemples sont justes.

Exemples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>*/
#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>
int is_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void put_nbr(int nbr)
{
	int long nb;

	nb = nbr;
	if(nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb >= 10)
		put_nbr((int)nb / 10);
	nb = nb % 10 + '0';
	write(1, &nb, 1);
}

int main(int ac, char **av)
{
	int i;
	long int nbr;
	long int somme;

	i = 2;
	if (ac != 2)
		write(1, "0\n", 2);
	else
	{
		somme =  0;
		nbr = atoi(av[1]);
		if (nbr <= 0)
		{
			write(1, "0\n", 2);
			return(0);
		}
		while(i <= nbr)
		{
			if (is_prime(i))
				somme += i;
			i++;
		}
		printf("%ld\n", somme);
		put_nbr(somme);

		write(1, "\n", 1);
	}
	return(0);
}
