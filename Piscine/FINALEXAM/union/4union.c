/* Ecrire un programme nommé union qui prend en paramètre deux chaînes de
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

int check_double(char *tab, char c)
{
	int i;

	i = 0;
	while(tab[i])
	{
		if (c == tab[i])
			return(0);
		i++;
	}
	return(1);
}

void ft_union(char *s1, char *s2)
{
	int i; 
	int j; 
	char tab[100000] = "";
	
	i = -1;
	while (++i < 100000)
		tab[i] = 0;
	j = 0;
	i = 0;
	while(s1[i])
	{
		if (check_double(tab, s1[i]))
		{
			write(1, &s1[i], 1);
			tab[j] = s1[i];
			j++;
		}
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (check_double(tab, s2[i]) == 1)
		{
				write(1, &s2[i], 1);
				tab[j] = s2[i];
				j++;
		}
		i++;
	}

}

int main(int ac, char **av)
{
	if(ac != 3)
		write(1, "\n", 1);
	else
		ft_union(av[1], av[2]);
	return(0);
}
