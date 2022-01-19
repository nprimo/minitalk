/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:34:09 by nprimo            #+#    #+#             */
/*   Updated: 2021/10/20 11:43:27 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	pos;

	pos = 0;
	if (n == 0)
		return (0);
	while (s1[pos] == s2[pos] && s1[pos] && s2[pos] && pos < (n - 1))
		pos++;
	return ((unsigned char) s1[pos] - (unsigned char) s2[pos]);
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	n;

	n = atoi(av[3]);
	printf("or: %d\n", strncmp(av[1], av[2], n));
	printf("mi: %d\n", ft_strncmp(av[1], av[2], n));
}
*/
