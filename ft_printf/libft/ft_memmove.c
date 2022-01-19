/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:48:05 by nprimo            #+#    #+#             */
/*   Updated: 2021/10/28 17:25:26 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_uc;
	unsigned char	*src_uc;
	size_t			pos;

	dst_uc = (unsigned char *) dst;
	src_uc = (unsigned char *) src;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (len > 0)
		{
			len--;
			dst_uc[len] = src_uc[len];
		}
		return (dst);
	}
	pos = 0;
	while (pos < len)
	{
		dst_uc[pos] = src_uc[pos];
		pos++;
	}
	return (dst);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int ac, char **av)
{
	size_t	n;
	char	s1[] = "12345678";
	char	s2[] = "guarda come";

	if (ac == 4)
	{
		n = ft_atoi(av[3]);
		strcpy(s1, av[1]);
		strcpy(s2, av[2]);
		printf("overlap: %d\n", is_overlap(av[1], av[2]));
		printf("or: %s\n", memmove(av[1], av[2], n));
		printf("mi: %s\n", ft_memmove(s1, s2, n));
	}
	else
	{
		printf("overlap: %d\n", is_overlap(s1, s1 + 8));
		printf("or: %s\n", memmove(s1, s1 + 2, 3));
		printf("mi: %s\n", ft_memmove(s1, s1 + 2, 3));
	}
}
*/
