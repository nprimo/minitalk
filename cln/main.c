/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 12:15:13 by nprimo            #+#    #+#             */
/*   Updated: 2022/02/02 21:54:59 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	send_msg(pid_t pid, char *msg)
{
	int	count;

	while (*msg)
	{
		count = 8;
		while (--count >= 0)
		{
			if ((*msg >> count) % 2)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			usleep(100);
		}
		msg++;
	}
}

int	main(int ac, char **av)
{
	pid_t	pid;

	if (ac > 2)
	{
		pid = ft_atoi(av[1]);
		send_msg(pid, av[2]);
	}
	return (0);
}
