/*
Ecrire un programme nommé union qui prend en paramètre deux chaînes de
caractères et qui affiche, sans doublon, les caractères qui apparaissent dans
l'une ou dans l'autre.
L'affichage se fera dans l'ordre d'apparition dans la ligne de commande.
L'affichage doit etre suivi d'un retour à la ligne.
Si le nombre de paramètres transmis est différent de 2, le programme affiche
\n.

Exemple:
$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>*/

#include <unistd.h>

int check_double(char *str, char c, int index)
{
	int i;

	i = 0;
	while(str[i] && i < index)
	{
		if (c == str[i])
			return (0);
		i++;
	}
	return(1);
}

int ft_check(char c, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_union(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char tab[1000] = "";
	while (s1[i])
	{
		if (ft_check(s1[i], tab) == 0)
		{
			write(1, &s1[i],1);
			tab[j] = s1[i];
			j++;
		}
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (ft_check(s2[i], tab) == 0)
		{
			write(1, &s2[i],1);
			tab[j] = s2[i];
			j++;
		}
		i++;
	}
}

int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac != 3)
		write(1, "\n", 1);
	ft_union(av[1], av[2]);
	/*while(av[1][i])
	{
		if(check_double(av[1], av[1][i], i))
			write(1, &av[1][i], 1);
		i++;
	}
	i = 0;
	while(av[2][i])
	{
		if (check_double(av[1], av[2][i], i) && check_double(av[2], av[2][i], i))
		   write(1, &av[2][i], 1);
		i++;
	}*/
	return (0);
}

