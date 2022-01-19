/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_dig.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 19:11:46 by nprimo            #+#    #+#             */
/*   Updated: 2021/12/03 19:17:44 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_dig(va_list ap)
{
	char	*res;
	size_t	len;
	int		n;

	n = va_arg(ap, int);
	res = ft_itoa(n);
	if (!res)
		return (0);
	len = ft_strlen(res);
	ft_putstr_fd(res, 1);
	free(res);
	return (len);
}
