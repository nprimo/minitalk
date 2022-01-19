/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:52:51 by nprimo            #+#    #+#             */
/*   Updated: 2021/10/20 17:06:13 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int ac, char **av)
{
	size_t	n;
	size_t	len;
	int		c;
	char	s[100];

	n = atoi(av[2]);
	len = ft_strlen(av[1]);
	strcpy(s, av[1]);
	printf("--- Or ---\n");
	bzero(av[1], n);
	c = 0;
	while (c < len)
	{
		printf("%d", av[1][c]);
		c++;
	}
	printf("\n--- mi ---\n");
	ft_bzero(s, n);
	c = 0;
	while (c < len)
	{
		printf("%d", s[c]);
		c++;
	}
}
*/
