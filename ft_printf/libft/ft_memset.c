/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:37:52 by nprimo            #+#    #+#             */
/*   Updated: 2021/10/20 16:50:46 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	pos;

	pos = 0;
	while (pos < len)
	{
		((unsigned char *) b)[pos] = (unsigned char) c;
		pos++;
	}
	return (b);
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	size_t	n;

	n = atoi(av[3]);
	printf("or: %s\n", memset(av[1], *av[2], n));
	printf("mi: %s\n", ft_memset(av[1], *av[2], n));
}
*/
