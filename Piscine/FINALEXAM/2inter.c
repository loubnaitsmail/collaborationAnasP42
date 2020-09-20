/*crire un programme qui prend en paramètres deux chaînes de caractères et qui
affiche sans doublon les caractères communs aux deux chaînes.

L'affichage se fera dans l'ordre d'apparition dans la premiere chaîne.
L'affichage doit être suivi d'un '\n'.

Si le nombre de paramètres transmis est différent de 2, le programme affiche
'\n'.

Exemples:
$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$
© 2020 GitHub, Inc.*/

#include <unistd.h>

int check_double(char *copy, char c)
{
	int i;

	i = 0;
	while (copy[i])
	{
		if (c == copy[i])
			return (0);
		i++;
	}
	return(1);
}

int check_same(char c, char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if (c == str[i])
			return(1);
		i++;
	}
	return(0);
}


int main (int ac, char **av)
{
	int i;
	int y;
	char copy[1000] = "";
	i = -1;
	while (++i < 1000)
		copy[i] = 0;

	i = 0;
	y = 0;
	if (ac != 3)
		write(1, "\n", 1);
	else
	{
		while(av[1][i])
		{
			if (check_double(copy, av[1][i]) && check_same(av[1][i], av[2]))
			{
				write(1, &av[1][i], 1);
				copy[y] = av[1][i];
			}
			y++;
			i++;
		}
		write(1, "\n", 1);
	}

	return(0);
}
