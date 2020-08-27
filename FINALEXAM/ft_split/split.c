#include <stdlib.h>
#include <stdio.h>

int is_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return(1);
		i++;
	}
	return(0);
}

int count_word(char *str, char *charset)
{
	int i;
	int count; 

	i = 0;
	count = 0;
	while(str[i])
	{
		if (str[i] && is_charset(str[i], charset) == 1)
			i++;
		else if(str[i] && is_charset(str[i], charset) == 0)
		{
			count++; 
			while(str[i] && is_charset(str[i], charset) == 0)
				i++;
		}
	}
	return(count);
}

char *duplicate(char *str, int caracters)
{
	char *dest;
	int i;

	i = 0;
	if(!(dest = malloc(sizeof(char) * (caracters + 1))))
		return (NULL);
	while (str[i] && i < caracters)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

char **fill_tab(char *str, char *charset, int words)
{
	int i; 
	int count; 
	int caracters;
	char **tab;

	if(!(tab = malloc(sizeof(char) * (words + 1))))
		return (NULL);
	i = 0; 
	count = 0; 
	while (count < words)
	{
		caracters = 0;
		while (str[i] && is_charset(str[i], charset) == 1)
			i++;
		while (str[i] && is_charset(str[i], charset) == 0)
		{
			caracters++;
			i++;
		}
		tab[count] = duplicate(&str[i - caracters], caracters);
		count++;
	}
	tab[words] = 0;
	return (tab);
}


char **ft_split(char *str, char *charset)
{
	char **tab;
	int words;

	words = count_word(str, charset);
	printf("%d\n", words);
	tab = fill_tab(str, charset, words);
	return (tab);
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
