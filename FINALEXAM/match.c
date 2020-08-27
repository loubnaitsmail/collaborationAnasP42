/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litsmail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 16:47:38 by litsmail          #+#    #+#             */
/*   Updated: 2020/08/27 19:44:36 by litsmail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++; 
	}
}

int countLetter(char *s, char c)
{
	int i = 0;
	int result  = 0;

	while (s[i])
	{
		if (s[i] == c)
			result ++;
		i++;
	}
	return result;
}

int main(int ac, char **av)
{
	int i;
	int j;
	int len;

	i = 0;
	j = 0;
	len = 0;
	if (ac != 3)
		write(1, "\n", 1);
	else 
	{
		while (av[1][i])
		{
			char c = av[1][i];
			if (countLetter(av[1], c) > countLetter(av[2], c))
			{
				write(1, "\n", 1);
				return 0;
			}
			i++;
		}
		ft_putstr(av[1]);
		write(1, "\n", 1);

	}
		return (0);
}
