/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 19:23:53 by nprimo            #+#    #+#             */
/*   Updated: 2021/12/08 19:08:35 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_uns(va_list ap)
{
	unsigned int	u;
	int				len;

	len = 0;
	u = va_arg(ap, unsigned int);
	ft_putnbr_base(u, "0123456789", &len);
	return (len);
}
