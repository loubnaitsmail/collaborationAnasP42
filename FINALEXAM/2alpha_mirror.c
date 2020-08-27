/*Écrire un programme alpha_mirror qui prend une chaîne et l'affiche après en avoir remplacé chaque
caractère alphabétique par le caractère alphabétique opposé, suivie d'un newline.

'a' devient 'z', 'Z' devient 'A'
'd' devient 'w', 'M' devient 'N'

Etc...

La casse n'est pas changée.

Si le nombre d'arguments n'est pas 1, affiche juste un newline.

Exemples:

$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$>*/

#include <unistd.h>


int 	testHardCore()
{
	char *


}




int main(int ac, char **av)
{
	int i;
	
	i = 0;
	
	if (ac != 2)
		write(1, "\n", 1);
	else 
		{
			while (av[1][i])
			{
				if (av[1][i] >= 'a' && av[1][i] <= 'z') 
					av[1][i] = 219 - av[1][i];
				else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
					av[1][i] = 155 - av[1][i];
				write(1, &av[1][i], 1);
				i++;
			}
			write(1, "\n", 1);
		}
	return(0);
}
