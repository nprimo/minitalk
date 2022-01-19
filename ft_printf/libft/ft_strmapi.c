/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:58:59 by nprimo            #+#    #+#             */
/*   Updated: 2021/11/04 10:49:59 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dst;
	size_t	len;	
	size_t	pos;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	dst = malloc(sizeof(char) * (len + 1));
	if (dst == 0)
		return (0);
	pos = 0;
	while (pos < len)
	{
		dst[pos] = f(pos, s[pos]);
		pos++;
	}
	dst[pos] = 0;
	return (dst);
}
