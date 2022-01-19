/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:21:54 by nprimo            #+#    #+#             */
/*   Updated: 2021/10/20 17:28:57 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	pos;

	pos = 0;
	while (pos < n)
	{
		if (((unsigned char *) s)[pos] == (unsigned char) c)
			return (&((unsigned char *) s)[pos]);
		pos++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(int ac, char **av)
{
	size_t len;

	if (ac == 3)
	{
		len = ft_strlen(av[1]) + 1;
		printf("or: %s\n", memchr(av[1], *av[2], len));
		printf("mi: %s\n", ft_memchr(av[1], *av[2], len));
	}
}
*/
