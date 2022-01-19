/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:38:17 by nprimo            #+#    #+#             */
/*   Updated: 2021/10/20 16:35:32 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if (c == ' ' || c == '\n' || c == '\t'
		|| c == '\f' || c == '\v' || c == '\r')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * sign);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	printf("or: %d\n", atoi(av[1]));
	printf("mi: %d\n", ft_atoi(av[1]));
}
*/
