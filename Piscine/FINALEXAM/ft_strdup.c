
char *ft_strdup(char *dest, char *str)
{
	int i;

	i = 0;
	if(!str)
		return(0);
	while(str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

#include<stdio.h>
int main()
{
	char *src = "loubna";
	char dest[6];
	printf("%s", ft_strdup(dest, src));
}
