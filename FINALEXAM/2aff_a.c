/*crire un programme qui prend une chaîne de caractères et affiche le premier
caractère 'a' qu'il y rencontre, suivi d'un newline. S'il n'y a pas de
caractère 'a' dans la chaîne, le programme affiche juste un newline. Si le
nombre de paramètres n'est pas 1, le programme affiche 'a' suivi d'un newline.

Exemple:

$> ./aff_a "abc" | cat -e
a$
$> ./aff_a "dubO a POIL" | cat -e
a$
$> ./aff_a "zz sent le poney" | cat -e
$
$> ./aff_a | cat -e
a$*/

#include <unistd.h>

int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		while(av[1][i])
		{
			if (av[1][i] == 'a')
			{
				write(1, &av[1][i], 1);
				break;
			}
			i++;
		}
		write(1, "\n", 1);
	}
	return(0);
}

