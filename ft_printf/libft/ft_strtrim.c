/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 15:02:21 by nprimo            #+#    #+#             */
/*   Updated: 2021/11/03 19:24:42 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isset(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static size_t	count_front(char const *s1, char const *set)
{
	size_t	c;

	c = 0;
	while (isset(s1[c], set) && s1[c])
		c++;
	return (c);
}

static size_t	count_end(char const *s1, char const *set, size_t head)
{
	size_t	c;
	size_t	len;

	c = 1;
	len = ft_strlen(s1);
	if (len == head)
		return (0);
	while (isset(s1[len - c], set) && c < len)
		c++;
	return (c - 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len_tot;
	size_t	head;
	size_t	tail;
	size_t	c;

	if (s1 == NULL || set == NULL)
		return (NULL);
	head = count_front(s1, set);
	len_tot = ft_strlen(s1);
	tail = count_end(s1, set, head);
	str = malloc(sizeof(char) * (len_tot - tail - head + 1));
	if (!str)
		return (NULL);
	str[len_tot - head - tail] = 0;
	if (len_tot - head - tail == 0)
		return (str);
	c = 0;
	while (c < (len_tot - tail - head))
	{
		str[c] = s1[head + c];
		c++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(int ac, char **av)
{
	char s1[] = "\t \n\n  ";

	printf("%s\n", ft_strtrim(s1, " \n\t"));
}
*/
