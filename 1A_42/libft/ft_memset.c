/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litsmail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 19:32:52 by litsmail          #+#    #+#             */
/*   Updated: 2020/12/01 20:19:13 by litsmail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p, int value, size_t size)
{
	size_t			i;
	unsigned char	*dest_p;
	unsigned char	dest_value;

	i = 0;
	dest_p = (unsigned char *)p;
	dest_value = (unsigned char)value;
	while (i < size)
	{
		dest_p[i] = dest_value;
		i++;
	}
	dest_p[i] = '\0';
	return (p);
}
