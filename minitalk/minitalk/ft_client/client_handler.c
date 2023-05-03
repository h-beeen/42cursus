/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_handler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:09:40 by hbyeon            #+#    #+#             */
/*   Updated: 2023/05/03 13:09:41 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	hdr_connection_with_server(int signo, siginfo_t *siginfo, void *context)
{
	(void)siginfo;
	(void)context;
	if (signo == SIGUSR1)
	{
		ft_putstr_lf("Connection with SERVER : SUCCESS");
		g_client_act.sa_sigaction = hdr_send_message;
		sigaction(SIGUSR1, &g_client_act, NULL);
		sigaction(SIGUSR2, &g_client_act, NULL);
		ft_send_message();
	}
	else if (signo == SIGUSR2)
		ft_exception("CONNECTION FAILED");
	else
		ft_exception("INVALID SIGNAL");
}

void	hdr_send_message(int signo, siginfo_t *siginfo, void *context)
{
	(void)siginfo;
	(void)context;
	if (signo == SIGUSR2)
	{
		ft_putstr_lf("Send Message to SERVER : SUCCESS");
		exit(0);
	}
	else
		ft_exception("SEND MESSAGE FAILED");
}
