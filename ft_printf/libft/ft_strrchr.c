/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:23:52 by nprimo            #+#    #+#             */
/*   Updated: 2021/10/29 09:42:32 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*start;
	size_t		len;

	start = s;
	len = ft_strlen(s);
	s += len;
	while (s != start)
	{
		s--;
		if (*s == (char) c)
			return ((char *) s);
	}
	if (c == 0)
		return ((char *) &s[len]);
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(int ac, char **av)
{
	char	s[]="there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	char	s1[] = "tripouille";
	int		c = '\0';

	if (ac == 3)
	{
		printf("or: %s\n", strrchr(av[1], *av[2]));
		printf("mi: %s\n", ft_strrchr(av[1], *av[2]));
		return (0);
	}
	printf("or: %s\n", strrchr(s, c));
	printf("mi: %s\n", ft_strrchr(s, c));
	printf("Tripouille\n");
	printf("or: %s\n", strrchr(s1, 't' + 256));
	printf("mi: %s\n", ft_strrchr(s1, 't' + 256));

}
*/
