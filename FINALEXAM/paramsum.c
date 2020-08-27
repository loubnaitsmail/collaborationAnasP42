/*Écrire un programme paramsum qui affiche le nombre d'arguments passés en
paramètre au programme, suivi d'un \n.

Si aucun argument n'est passé, vous afficherez 0, suivi d'un \n.

Exemple:

$>./paramsum 1 2 3 5 7 24
6
$>./paramsum 6 12 24 | cat -e
3$
$>./paramsum | cat -e
0$
$>*/

#include <unistd.h>

int main(int ac, char **av)
{
	int i;

	(void)av;
	if (ac == 1)
		write(1, "0\n", 2);
	else 
	{
		i = ac - 1;
		i = i % 10 + 48;
		write(1, &i, 1);
		
	}
	return(0);
}
