#include <unistd.h>
#include <stdlib.h>

void print_hex(int nbr)// 16 // 1
{
	char *hex = "0123456789abcdef";
	int	div = nbr / 16; // 1// 0
	int mod = nbr % 16; // 0 // 1
	if (nbr >= 16) // oui // non
		print_hex(div); // p(1) //never
	write(1, &hex[mod], 1); //print(1) // print(0)
}



int main(int ac, char** av)
{
	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		print_hex(atoi(av[1]));
		write(1, "\n", 1);
	}
	return(0);
}
