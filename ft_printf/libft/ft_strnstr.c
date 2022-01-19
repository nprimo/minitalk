/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:06:34 by nprimo            #+#    #+#             */
/*   Updated: 2021/10/28 16:42:55 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	pos;
	size_t	c;
	size_t	len;

	pos = 0;
	len = ft_strlen(s2);
	if (s2[pos] == 0)
		return ((char *) s1);
	while (s1[pos] && (pos + len) <= n)
	{
		c = 0;
		if (s1[pos] == s2[c])
		{
			while (s1[pos + c] == s2[c] && s1[pos + c])
				c++;
			if (c == len)
				return ((char *) &s1[pos]);
		}
		pos++;
	}	
	return (0);
}

/*
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	size_t	n;

	n = atoi(av[3]);
	printf("or: %s\n", strnstr(av[1], av[2], n));
	printf("mi: %s\n", ft_strnstr(av[1], av[2], n));
}
*/
