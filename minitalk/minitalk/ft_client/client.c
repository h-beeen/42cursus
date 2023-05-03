/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:53:50 by hbyeon            #+#    #+#             */
/*   Updated: 2023/05/03 13:06:40 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

t_data	g_client_data;

void	ft_connection_with_server(int signo)
{
	ft_kill(g_client_data.pid, signo);
	pause();
}

void	ft_send_message(void)
{
	static int	i = 0;
	static int	bit = 8;

	while (g_client_data.msg[i] != '\0')
	{
		while (--bit >= 0)
		{
			if ((g_client_data.msg[i] >> bit) & 1)
				ft_kill(g_client_data.pid, SIGUSR1);
			else
				ft_kill(g_client_data.pid, SIGUSR2);
		}
		bit = 8;
		i++;
	}
	if (g_client_data.msg[i] == '\0')
	{
		while (bit-- > 0)
			ft_kill(g_client_data.pid, SIGUSR2);
		pause();
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		ft_exception("./client [SERVER PID] [SEND MESSAGE]");
	g_client_act.sa_flags = SA_SIGINFO;
	g_client_act.sa_sigaction = hdr_connection_with_server;
	sigemptyset(&g_client_act.sa_mask);
	sigaction(SIGUSR1, &g_client_act, NULL);
	sigaction(SIGUSR2, &g_client_act, NULL);
	g_client_data.pid = ft_atoi(argv[1]);
	g_client_data.msg = argv[2];
	ft_putstr_fd("[CLIENT PID : ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putstr_lf("]");
	ft_connection_with_server(SIGUSR1);
	return (0);
}
