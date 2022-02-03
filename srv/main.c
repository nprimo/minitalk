/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:20:16 by nprimo            #+#    #+#             */
/*   Updated: 2022/02/03 15:03:27 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include <stdio.h>

static void	hand_signal(int sig)
{
	static int	count = 7;
	static char	c = 0;

	if (sig == SIGUSR2)
		c += (1 << count);
	else if (sig == SIGUSR1)
		c += (0 << count);
	if (--count == -1)
	{
		ft_putchar_fd(c, 1);
		count = 7;
		c = 0;
	}
}

static int	return_error(void)
{
	ft_printf("Error\n");
	return (1);
}

int	main(void)
{
	pid_t				pid;
	struct sigaction	sa;

	pid = getpid();
	ft_printf("PID: %d\n", pid);
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = 0;
	sa.sa_handler = hand_signal;
	while (1)
	{
		if (sigaction(SIGUSR1, &sa, NULL) == -1
			|| sigaction(SIGUSR2, &sa, NULL) == -1)
			return (return_error());
		pause();
	}
}
