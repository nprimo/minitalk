/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:31:32 by nprimo            #+#    #+#             */
/*   Updated: 2021/10/28 14:18:37 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	pos;

	pos = 0;
	if (n == 0)
		return (0);
	while (pos < n)
	{
		if (((unsigned char *) s1)[pos] != ((unsigned char *) s2)[pos])
			return (((unsigned char *) s1)[pos] - ((unsigned char *) s2)[pos]);
		pos++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int ac, char **av)
{
	size_t	n;

	if (ac == 4)
	{
		n = ft_atoi(av[3]);
		printf("or: %d\n", memcmp(av[1], av[2], n));
		printf("mi: %d\n", ft_memcmp(av[1], av[2], n));
	}
}
*/
