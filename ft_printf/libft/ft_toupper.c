/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:37:24 by nprimo            #+#    #+#             */
/*   Updated: 2021/10/20 11:03:21 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(int ac, char **av)
{
	while (*av[1])
	{
		printf("Or: %c\tMi: %c\n", toupper(*av[1]), ft_toupper(*av[1]));
		av[1]++;
	}
}
*/
