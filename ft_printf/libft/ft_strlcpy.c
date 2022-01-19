/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 09:11:58 by nprimo            #+#    #+#             */
/*   Updated: 2021/10/25 12:28:00 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *s1, const char *s2, size_t n)
{
	size_t	c;

	if (n == 0)
		return (ft_strlen(s2));
	c = 0;
	while (s2[c] && (n - 1) > c)
	{
		s1[c] = s2[c];
		c++;
	}
	s1[c] = 0;
	return (ft_strlen(s2));
}

/*
#include <string.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	char	s1[100];
	char	s2[100];

	strcpy(s1, av[1]);
	strcpy(s2, av[2]);
	printf("--- Original ---\n");
	printf("s1: %s\ts2: %s\n", av[1], av[2]);
	printf("result: %lu\n", strlcpy(av[1], av[2], 0));
	printf("s1: %s\ts2: %s\n", av[1], av[2]);
	printf("--- mine ---\n");
	printf("s1: %s\ts2: %s\n", s1, s2);
	printf("result: %lu\n", ft_strlcpy(s1, s2, 0));
	printf("s1: %s\ts2: %s\n", s1, s2);
}
*/
