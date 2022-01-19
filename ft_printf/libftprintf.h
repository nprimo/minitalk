/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:43:25 by nprimo            #+#    #+#             */
/*   Updated: 2021/12/08 19:04:42 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdlib.h>

# include "libft/libft.h"

int		ft_printf(const char *str, ...);

int		print_char(va_list ap);
int		print_str(va_list ap);
int		print_dig(va_list ap);
int		print_uns(va_list ap);
int		print_hex(va_list ap, char type);
int		print_mem(va_list ap);
int		ft_putnbr_base(unsigned long n, char *base, int *len);

#endif
