/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:08:37 by nprimo            #+#    #+#             */
/*   Updated: 2021/10/28 16:23:38 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			pos;
	unsigned char	*dst_uc;
	unsigned char	*src_uc;

	if (dst == src || n == 0)
		return (dst);
	dst_uc = (unsigned char *) dst;
	src_uc = (unsigned char *) src;
	pos = 0;
	while (pos < n)
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

int	main(int ac, char **av)
{
	size_t	n;
	size_t	pos;

	n = atoi(av[3]);
	printf("av[1]: %p\t av[2]: %p\n", av[1], av[2]);
	printf("%s\n", memcpy(av[1], av[2], n));
	printf("%s\n", ft_memcpy(av[1], av[2], n));
	printf("or: %s\n", memcpy("", "", 1));
	printf("mi: %s\n", ft_memcpy("", "", 1));
}
*/
