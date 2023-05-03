/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 23:06:18 by bahn              #+#    #+#             */
/*   Updated: 2023/05/03 13:08:51 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "./libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <signal.h>

struct sigaction	g_server_act;
struct sigaction	g_client_act;

size_t	ft_strlen(const char *s);
int		ft_atoi(const char *str);
char	*ft_strdup(const char *s1);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_lf(char *str);
void	ft_kill(pid_t pid, int signo);
void	ft_exception(char *exception);
char	*ft_charjoin(char *str, char ch);
void	hdr_connection_with_client(int signo, siginfo_t *siginfo, \
		void *context);
void	hdr_receive_message(int signo, siginfo_t *siginfo, void *context);
void	hdr_connection_with_server(int signo, \
		siginfo_t *siginfo, void *context);
void	hdr_send_message(int signo, siginfo_t *siginfo, void *context);
void	ft_connection_with_server(int signo);
void	ft_send_message(void);
void	ft_kill(pid_t pid, int signo);
void	exception(char *exception);
void	ft_putstr_lf(char *str);

#endif
