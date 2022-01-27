/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:20:16 by nprimo            #+#    #+#             */
/*   Updated: 2022/01/27 13:12:38 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	hand_signal(int sig)
{
	if (sig == SIGUSR1)
		ft_printf("0");
	if (sig == SIGUSR2)
		ft_printf("1");
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
		sigaction(SIGUSR2, &sa, NULL);
		pause();
	}
}
