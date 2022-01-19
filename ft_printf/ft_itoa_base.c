/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 17:14:20 by nprimo            #+#    #+#             */
/*   Updated: 2021/12/05 18:54:44 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static unsigned long	ft_pow(int base, int exp)
{
	unsigned long long	res;

	res = 1;
	while (exp > 0)
	{
		res *= base;
		exp--;
	}
	return (res);
}

static int	get_n_digits(unsigned long n, char *base)
{
	int		exp;
	size_t	base_len;

	if (n == 0)
		return (1);
	base_len = ft_strlen(base);
	exp = 1;
	while (n / ft_pow(base_len, exp) > 0)
		exp++;
	return (exp);
}

char	*ft_itoa_base(unsigned long n, char *base)
{
	char	*str;
	int		n_digits;
	int		pos;
	int		c;
	size_t	base_len;

	n_digits = get_n_digits(n, base);
	str = malloc(sizeof(char) * (n_digits + 1));
	if (!str)
		return (NULL);
	pos = 0;
	base_len = ft_strlen(base);
	while (n_digits > 0)
	{
		c = n / ft_pow(base_len, (n_digits - 1));
		str[pos] = base[c];
		pos++;
		n = n % ft_pow(base_len, (n_digits - 1));
		n_digits--;
	}
	str[pos] = 0;
	return (str);
}
