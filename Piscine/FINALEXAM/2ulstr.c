/*Écrire un programme qui prend en paramètre une chaîne de caractères, et qui
transforme toutes ses minuscules en majuscules et toutes ses majuscules en
minuscules. Les autres caractères restent inchangés.

Vous devez afficher le résultat suivi d'un '\n'.

Si le nombre de paramètres transmis est différent de 1, le programme affiche
'\n'.

Exemples :

$>./ulstr "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification." | cat -e
l'EspRIT Ne PEuT PLuS PrOGrESsER S'iL STAgNE ET Si PErSiStENT vaNiTE ET AUTO-JUSTIFICATION.$
$>./ulstr "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.  " | cat -e
s'ENtoUrER De SecREt EsT Un SigNe dE MaNqUe dE COnnAIssANcE.  $
$>./ulstr "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot" | cat -e
3:21 bA  ToUT  MOuN KI kA DI ke M'EN kA FE FOT$
$>./ulstr | cat -e
$*/

#include <unistd.h>

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
				   av[1][i] -= 32; 
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] += 32;
			write(1, &av[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return(0);
}	
