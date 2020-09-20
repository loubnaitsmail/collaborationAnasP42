/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litsmail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 16:47:38 by litsmail          #+#    #+#             */
/*   Updated: 2020/08/27 20:17:19 by litsmail         ###   ########.fr       */
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

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return(i);
}

int check(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s2[j])
	{
		if (s1[i] == s2[j])
			i++;
		j++;
	}
	if(i == ft_strlen(s1))
		return (1);
	return(0);
}

int main(int ac, char **av)
{
	if (ac != 3)
		write(1, "\n", 1);
	else 
	{
		if (check(av[1], av[2]))
			ft_putstr(av[1]);
		write(1, "\n", 1);
	}
	return (0);
}
