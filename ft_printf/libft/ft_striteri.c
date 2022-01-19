/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:20:15 by nprimo            #+#    #+#             */
/*   Updated: 2021/10/29 09:15:20 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	pos;

	if (s == NULL)
		return ;
	pos = 0;
	while (s[pos])
	{
		f(pos, &s[pos]);
		pos++;
	}
}
