#include <stdio.h>

void capitlize(char *str)
{
	int i = 0;
	int start = 1;
	while(str[i])
	{
		if(start && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if(!start && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		start = 0;
		if (!  ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
			start = 1;
		i++;
	}
	printf("%s", str);
}


int main()
{
	capitlize(strdup("loubna iGHJl khjsGJK"));
}
