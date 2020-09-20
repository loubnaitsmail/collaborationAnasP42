/*
   Écrire une fonction qui convertit une chaîne en un entier (type int) et le retourne.

   Marche comme la fonction standard atoi(const char *str), voir le man.

   La fonction doit être prototypée comme suit:

   int	ft_atoi(const char *str);*/

int	ft_atoi(const char *str)
{
	int i;
	int sign;
	long long int result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\f' || str[i] == '\r' || str[i] == '\n'  || str[i] == '\v'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - 48;
		i++;
	}

	result = result * sign;
	return ((int)result);
}

#include <stdlib.h>
#include <stdio.h>
int main (int ac, char **av)
{
	(void)ac;
	printf("%d\n", ft_atoi(av[1]));
	printf("%d\n", atoi(av[1]));

	//str == 0??

}
