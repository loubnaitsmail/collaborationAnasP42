/*Écrire la fonction suivante :

  int     *ft_range(int start, int end);

  Cette fonction doit allouer avec malloc() un tableau d'ints, le remplir avec
  les valeurs (consécutives) démarrant à start et finissant à end (start et end
  inclus !), et renvoyer un pointeur vers la première valeur du tableau.

Exemples:

- Avec (1, 3) vous devrez renvoyer un tableau contenant 1, 2 et 3.
- Avec (-1, 2) vous devrez renvoyer un tableau contenant -1, 0, 1 et 2.
- Avec (0, 0) vous devrez renvoyer un tableau contenant 0.
- Avec (0, -3) vous devrez renvoyer un tableau contenant 0, -1, -2 et -3.*/

#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
	int	*tab;
	int len;
	int i;

	i = 0;
	if(end < 0)
		len = -end + start + 1;
	else
		len = end - start + 1;

	if(!(tab = malloc(sizeof(int) * len)))
		return (NULL);

	if(end >= start)
	{
		while(i < len)
		{
			tab[i] = start;
			i++;
			start++;
		}
	}

	else if (start > end)
	{
		i = 0;
		while(i < len)
		{
			tab[i] = start;
			start--;
			i++;
		}
	}
	return(tab);
}

int main()
{
	int *tab =ft_range(10, 10);
	int i = 0;
	while(i< 2)
	{
		printf("%d\n", tab[i]);
		i++;
	}


}
