/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:31:38 by nprimo            #+#    #+#             */
/*   Updated: 2021/12/03 18:51:10 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_char(va_list ap)
{
	unsigned char	c;

	c = (unsigned char) va_arg(ap, int);
	ft_putchar_fd(c, 1);
	return (1);
}
