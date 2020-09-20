/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litsmail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 21:03:11 by litsmail          #+#    #+#             */
/*   Updated: 2020/08/24 21:13:39 by litsmail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int	i;

	i = 0; 
	while(str[i])
		i++;
	return (i);
}

char    *ft_strrev(char *str)
{
	int i;
	int y;
	char swap;

	i = 0;
	y = ft_strlen(str) - 1;
	if(!str)
		return(0);
	while (str[i] && i < y)
	{
		swap = str[i];
		str[i] = str[y];
		str[y] = swap;
		i++;
		y--;
	}
	return(str);
}

#include<string.h>
#include<stdio.h>
int main()
{
	char *text = "abcd";
	printf("%s", ft_strrev(strdup(text)));
}
