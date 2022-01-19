/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 09:40:29 by nprimo            #+#    #+#             */
/*   Updated: 2021/11/03 18:26:17 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t n)
{
	size_t	c;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (n > (len_s1))
	{
		c = 0;
		while ((len_s1 + c) < (n - 1) && s2[c])
		{
			s1[len_s1 + c] = s2[c];
			c++;
		}
		s1[len_s1 + c] = 0;
		return (len_s1 + len_s2);
	}
	else
		return (n + len_s2);
}

/* 
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	size_t	n;
	char	s1_or[100];
	char	s1[100];
	char	s2[100];

	strcpy(s1_or, av[1]);
	strcpy(s1, av[1]);
	strcpy(s2, av[2]);
	n = atoi(av[3]);
	printf("--- Original ---\n");
	printf("s1: %s\ts2: %s\n", s1_or, av[2]);
	printf("result: %lu\n", strlcat(s1_or, av[2], n));
	printf("s1: %s\ts2: %s\n", s1_or, av[2]);
	printf("--- mine ---\n");
	printf("s1: %s\ts2: %s\n", s1, s2);
	printf("result: %lu\n", ft_strlcat(s1, s2, n));
	printf("s1: %s\ts2: %s\n", s1, s2);
}*/
/*
int main(void)
{
	char dest[30]; memset(dest, 0, 30);
	char * src = (char *)"AAAAAAAAA";

	ft_memset(dest, 'C', 5);
	printf("14: %zu\n", ft_strlcat(dest, src, -1)); 
	printf("%d", !strcmp(dest, "CCCCCAAAAAAAAA"));
}
*/
