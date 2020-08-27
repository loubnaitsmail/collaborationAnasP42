/*Écrire un programme qui prend une chaîne de caractères en paramètre, et qui
  affiche le dernier mot de cette chaîne, suivi d'un '\n'.

  On appelle "mot" une portion de chaîne de caractères délimitée soit par des
  espaces et/ou des tabulations, soit par le début / fin de la chaîne.

  Si le nombre de paramètres transmis est différent de 1, ou s'il n'y a aucun mot
  à afficher, le programme affiche '\n'.

Exemple:

$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>*/

#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

int main(int ac, char **av)
{
	int end;
	int i;

	if (ac != 2)
		write(1, "\n", 1);
	else 
	{
		i = ft_strlen(av[1]) - 1;
		while(i >= 0  && (av[1][i] == ' ' ||  av[1][i] == '\t'))
			i--;
		end = i;
		while (i >= 0 && av[1][i] != ' ' &&  av[1][i] != '\t')
			i--;
		while (i < end)
		{
			write(1, &av[1][i+1], 1);
			i++;	
		}
		write(1, "\n", 1);
	}
	return(0);
}
