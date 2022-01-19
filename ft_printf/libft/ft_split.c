/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:24:58 by nprimo            #+#    #+#             */
/*   Updated: 2021/11/03 20:56:33 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int		n_words;

	n_words = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			n_words++;
			while (*s != c && *s)
				s++;
		}
	}
	return (n_words);
}

static char	*assign_word(char const *s, char c)
{
	int		len;
	char	*str;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	str = malloc(sizeof(char) * (len + 1));
	if (str == 0)
		return (0);
	ft_strlcpy(str, s, len + 1);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		n_words;		
	int		pos;

	if (s == NULL)
		return (NULL);
	n_words = count_words(s, c);
	res = malloc(sizeof(char *) * (n_words + 1));
	if (res == NULL)
		return (NULL);
	res[n_words] = NULL;
	pos = 0;
	while (pos < n_words)
	{
		while (*s == c && *s)
			s++;
		res[pos] = assign_word(s, c);
		if (res[pos] == NULL)
			return (NULL);
		s += ft_strlen(res[pos]);
		pos++;
	}	
	return (res);
}

/*
#include <stdio.h>

int	main(int ac, char **av)
{
	char	**res;
	int		c;
	
	
	//res = ft_split(av[1], *av[2]);
	res = ft_split("tripouille", 0);
	c = 0;
	while (res[c])
	{
		printf("%s\n", res[c]);
		c++;
	}
	printf("res[%d]: %s\n", c, res[c]);
}
*/
