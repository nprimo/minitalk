/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:39:45 by nprimo            #+#    #+#             */
/*   Updated: 2021/11/04 10:51:39 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == INT_MIN)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n < 10)
		ft_putchar_fd(n + '0', fd);
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}

/*
#include <fcntl.h>

int	main(int ac, char **av)
{
	int	fd;
	int	n;

	fd = open("test", O_WRONLY | O_CREAT);
	if (fd == -1)
		return (0);
	n = ft_atoi(av[1]);
	ft_putnbr_fd(n, fd);
	if (close(fd) == -1)
		return (0);
	return (1);
}
*/
