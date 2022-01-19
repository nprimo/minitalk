/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 15:30:51 by nprimo            #+#    #+#             */
/*   Updated: 2021/11/04 10:55:22 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

static unsigned long	ft_pow(int base, int exp)
{
	unsigned long	res;

	res = 1;
	while (exp > 0)
	{
		res *= base;
		exp--;
	}
	return (res);
}

static int	get_n_digits(int n)
{
	int	exp;

	if (n == 0)
		return (1);
	if (n == INT_MIN)
		return (10);
	if (n < 0)
		n *= -1;
	exp = 1;
	while (n / ft_pow(10, exp) > 0)
		exp++;
	return (exp);
}

static void	fill_str(char *str, int n, int n_digits, int pos)
{
	int	c;

	while (n_digits > 0)
	{
		c = n / (int) ft_pow(10, (n_digits - 1));
		if (c < 0)
			c *= -1;
		str[pos] = c + '0';
		pos++;
		n = n % (int) ft_pow(10, (n_digits - 1));
		n_digits--;
	}
	str[pos] = 0;
}

char	*ft_itoa(int n)
{
	char	*str;
	int		n_digits;
	int		pos;

	n_digits = get_n_digits(n);
	if (n < 0)
		n_digits++;
	str = malloc(sizeof(char) * (n_digits + 1));
	if (str == 0)
		return (0);
	pos = 0;
	if (n < 0)
	{
		n_digits--;
		str[pos] = '-';
		pos++;
	}
	fill_str(str, n, n_digits, pos);
	return (str);
}

/*
int	main(int ac, char **av)
{
	int	n;

	n = atoi(av[1]);
	printf("%s\n", ft_itoa(n));
}
*/
