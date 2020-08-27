#include <stdio.h>


int is_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char *duplicate( char *dest, char *src);

void count_word(char *str, char *charset)
{
	int i;
	int size;

	i = 0;
	size = 0;
	while(str[i])
	{
		if (is_charset(str[i], charset) && str[i])
			i++;
		else if (!is_charset(str[i], charset) && str[i])
		{
			size++;
			while(!is_charset(str[i], charset) && str[i])
				i++;
		}
	}
	printf("%d", size);
}


int main()
{
	char *texte = "loubna loubna loubna";
    char *charset = "na";
	count_word(texte, charset);
}
