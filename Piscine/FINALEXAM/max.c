/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litsmail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 16:07:27 by litsmail          #+#    #+#             */
/*   Updated: 2020/08/27 17:47:25 by litsmail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int* tab, unsigned int len)
{
	int result;
	unsigned int i;

	i = 0;
	if (!len)
		return(0);

	result = tab[0];
	while (i < len)
	{
		if (tab[i] > result)
			result = tab[i];
		i++;
	}
	return (result);
}

#include <stdio.h>
int main()
{
	int tab[0] = {};
	printf("%d", max(tab, 0));
}
