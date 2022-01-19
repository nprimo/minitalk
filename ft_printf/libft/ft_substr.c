/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:41:02 by nprimo            #+#    #+#             */
/*   Updated: 2021/11/04 10:41:29 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	pos;
	size_t	len_s;
	size_t	size;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
		size = 0;
	else if (start < len_s && (start + len) >= len_s)
		size = len_s - start;
	else
		size = len;
	sub = malloc(sizeof(char) * (size + 1));
	if (sub == 0)
		return (NULL);
	pos = 0;
	while (s[start + pos] && pos < len && (start + pos) < len_s)
	{
		sub[pos] = s[start + pos];
		pos++;
	}
	sub[size] = 0;
	return (sub);
}

/*
#include <stdio.h>

int	main(int ac, char **av)
{
	size_t	start;
	size_t	len;
	//char	*s = ft_substr("tripouille", 0, 42000);
	char	*s = ft_substr("BONJOUR LES HARICOTS !", 8, 14);

	if (ac == 4)
	{
		start = ft_atoi(av[2]);
		len = ft_atoi(av[3]);
		printf("%s\n", ft_substr(av[1], start, len));
	}
	else
	{
		printf("%s\n", s);
	}
}
*/
