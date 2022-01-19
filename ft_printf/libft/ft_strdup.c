/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:20:04 by nprimo            #+#    #+#             */
/*   Updated: 2021/11/01 20:36:14 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dst;
	size_t	len;

	len = ft_strlen(src);
	dst = malloc(sizeof(char) * (len + 1));
	if (dst == 0)
		return (0);
	ft_strlcpy(dst, src, len + 1);
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>

int	main(int ac, char **av)
{
	printf("or: %s\n", strdup(av[1]));
	printf("mi: %s\n", ft_strdup(av[1]));
}
*/
