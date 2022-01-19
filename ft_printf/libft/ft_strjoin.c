/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:05:14 by nprimo            #+#    #+#             */
/*   Updated: 2021/11/04 10:50:25 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	len1;
	size_t	len2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	dst = malloc(sizeof(char) * (len1 + len2 + 1));
	if (dst == NULL)
		return (NULL);
	ft_strlcpy(dst, s1, len1 + 1);
	ft_strlcpy(&dst[len1], s2, len2 + 1);
	return (dst);
}

/*
#include <stdio.h>

int	main(int ac, char **av)
{
	printf("%s\n", ft_strjoin(av[1], av[2]));
}
*/
