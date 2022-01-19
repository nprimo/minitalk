/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:47:56 by nprimo            #+#    #+#             */
/*   Updated: 2021/12/08 19:05:55 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_base(unsigned long n, char *base, int *res)
{
	size_t	base_len;

	base_len = ft_strlen(base);
	if (n < base_len)
	{
		ft_putchar_fd(base[n], 1);
		(*res)++;
	}
	else
	{
		ft_putnbr_base(n / base_len, base, res);
		ft_putnbr_base(n % base_len, base, res);
	}
	return (*res);
}
