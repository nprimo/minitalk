/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 19:49:46 by nprimo            #+#    #+#             */
/*   Updated: 2021/12/08 19:09:10 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_hex(va_list ap, char type)
{
	unsigned int	u;
	int				len;

	u = va_arg(ap, unsigned int);
	len = 0;
	if (type == 'x')
		ft_putnbr_base(u, "0123456789abcdef", &len);
	else
		ft_putnbr_base(u, "0123456789ABCDEF", &len);
	return (len);
}
