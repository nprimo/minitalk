/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:48:26 by nprimo            #+#    #+#             */
/*   Updated: 2021/12/05 17:50:32 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	print_var(const char *str, va_list ap)
{
	if (str[1] == 'c')
		return (print_char(ap));
	else if (str[1] == 's')
		return (print_str(ap));
	else if (str[1] == 'p')
		return (print_mem(ap));
	else if (str[1] == 'd' || str[1] == 'i')
		return (print_dig(ap));
	else if (str[1] == 'u')
		return (print_uns(ap));
	else if (str[1] == 'x' || str[1] == 'X')
		return (print_hex(ap, str[1]));
	else if (str[1] == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	else
		return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		len;

	len = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			len += print_var(str, ap);
			str++;
		}
		else
		{
			ft_putchar_fd(*str, 1);
			len++;
		}
		str++;
	}
	va_end(ap);
	return (len);
}
