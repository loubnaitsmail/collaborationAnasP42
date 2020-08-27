/*• Écrire une fonction qui découpe une chaîne de caractères en fonction d’une autre
chaîne de caractères.
• Il faudra utiliser chaque caractère de la chaine charset comme séparateur.
• La fonction renvoie un tableau où chaque élément de celui ci contient l’adresse
d’une chaîne de caractères comprise entre deux séparateur. Le dernier élement du
tableau devra être égal à 0 pour marquer la fin du tableau.
• Il ne doit pas y avoir de chaîne vide dans votre tableau. Tirez-en les conclusions
qui s’imposent.
• La chaîne qui sera transmise ne sera pas modifiable.*/


#include <stdlib.h>
#include <stdio.h>

int is_charset(char c, char *charset)
{
	int i;

	i = 0;
	while(charset[i])
	{
		if (c == charset[i])
			return(1);
		i++;
	}
	return (0);
}

int count_words(char *str, char *charset)
{
	int words;
	int i;

	words = 0;
	i = 0;
	while(str[i])
	{
		if (str[i] && is_charset(str[i], charset))
			i++;
		else if(str[i] && !is_charset(str[i], charset))
		{
			words++;
			while (str[i] && !is_charset(str[i], charset))
				i++;
		}
	}
	return (words);
}
char *duplicate(char *str, int caracters)
{
	int i;
	char *dest;

	if (!(dest = malloc(sizeof(char) * (caracters + 1))))
		return (NULL);
	i = 0;
	while(str[i] && i < caracters)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

char **fill_tab(char **tab, char *str, char *charset, int size)
{
	int count;
	int i;
	int caracters;

	i = 0;
	count = 0;
	while (count < size)
	{
		caracters = 0;
		while (str[i] && is_charset(str[i], charset))
			i++;
		while (str[i] && !is_charset(str[i], charset))
		{
			caracters++;
			i++;
		}
		tab[count] = duplicate(&str[i - caracters], caracters);
		count++;
	}
	return(tab);
}



char **ft_split(char *str, char *charset)
{
	int words;
	char **tab;

	words = count_words(str, charset);
	if(!(tab = malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	tab = fill_tab(tab, str, charset, words);
	tab[words] = 0;
	return(tab);
}

int main()
{
	char *text = "bonjour+-salut++coucou";
	char *set = "+-";
	int i = 0;
	char **tab;
	tab = ft_split(text, set);
	while(tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}
