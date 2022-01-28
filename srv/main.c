/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:20:16 by nprimo            #+#    #+#             */
/*   Updated: 2022/01/28 12:11:11 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include <stdio.h>

t_char	g_c;

static void	hand_signal(int sig)
{
	if (sig == SIGUSR2)
		g_c.res += (1 << g_c.count);
	if (sig == SIGUSR1)
		g_c.res += (0 << g_c.count);
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
	g_c.count = 7;
	g_c.res = 0;
	while (1)
	{
		sigaction(SIGUSR1, &sa, NULL);
		sigaction(SIGUSR2, &sa, NULL);
		pause();
		g_c.count--;
		if (g_c.count == -1)
		{
			ft_printf("%c", g_c.res);
			g_c.count = 7;
			g_c.res = 0;
		}
	}
}
