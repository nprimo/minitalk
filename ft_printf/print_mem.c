/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_mem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 17:07:58 by nprimo            #+#    #+#             */
/*   Updated: 2021/12/08 19:08:58 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_mem(va_list ap)
{
	unsigned long	mem;
	int				len;

	mem = va_arg(ap, unsigned long);
	len = 2;
	write(1, "0x", 2);
	ft_putnbr_base(mem, "0123456789abcdef", &len);
	return (len);
}
