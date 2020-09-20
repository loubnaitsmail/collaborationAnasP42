/*Écrire la fonction suivante :

  int     *ft_rrange(int start, int end);

  Cette fonction doit allouer avec malloc() un tableau d'ints, le remplir avec
  les valeurs (consécutives) démarrant à end et finissant à start (start et end
  inclus !), et renvoyer un pointeur vers la première valeur du tableau.

Exemples:

- Avec (1, 3) vous devrez renvoyer un tableau contenant 3, 2 et 1.
- Avec (-1, 2) vous devrez renvoyer un tableau contenant 2, 1, 0 et -1.
- Avec (0, 0) vous devrez renvoyer un tableau contenant 0.
- Avec (0, -3) vous devrez renvoyer un tableau contenant -3, -2, -1 et 0.*/


#include <stdio.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	long int len;
	int *tab;
	int i;

	i = 0;
	len = 0;

	if (start > end)
		len = start - end + 1;
	else
		len = end - start + 1;
	printf("size == %d \n", len);
	if(!(tab = malloc(sizeof(int) * len)))
		return (NULL);
	if (start < end)
	{
		while (i < len)
		{
			tab[i] = end;
			i++;
			end--;
		}
	}
	else if (start > end)
	{
		while (i < len)
		{
			tab[i] = end;
			end++;
			i++;
		}
	}
	else if (start == end)
		tab[i] = end;
	return (tab);
}


int ABS(int a)
{
	if (a < 0)
		return -a;
	return a;

}
int main (int ac, char ** av)
{
	(void)ac;
	int *tab = ft_rrange(atoi(av[1]), atoi(av[2]));
	int i = 0;
	int len = ABS(atoi(av[1]) - atoi(av[2])) + 1; 
	while (i < len)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
