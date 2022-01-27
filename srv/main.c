/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:20:16 by nprimo            #+#    #+#             */
/*   Updated: 2022/01/27 12:04:24 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	hand_signal(int sig)
{
	ft_printf("Got signal %d...\n", sig);
}

int	main(void)
{
	pid_t				pid;
	struct sigaction	sa;

	pid = getpid();
	ft_printf("PID: %d\n", pid);
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = 0;
	sa.sa_flags = sa.sa_flags | SA_NODEFER | SA_RESETHAND;
	sa.sa_handler = hand_signal;
	while (1)
	{
		sigaction(SIGUSR1, &sa, NULL);
		pause();
	}
}
