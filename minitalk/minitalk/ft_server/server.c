/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:09:29 by hbyeon            #+#    #+#             */
/*   Updated: 2023/05/03 13:09:30 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc != 1)
		ft_exception("./server [NO ARGUMENTS REQUIRED]");
	g_server_act.sa_flags = SA_SIGINFO;
	g_server_act.sa_sigaction = hdr_connection_with_client;
	sigemptyset(&g_server_act.sa_mask);
	sigaction(SIGUSR1, &g_server_act, NULL);
	sigaction(SIGUSR2, &g_server_act, NULL);
	ft_putstr_fd("[SERVER PID : ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putstr_lf("]");
	while (1)
		pause();
}
