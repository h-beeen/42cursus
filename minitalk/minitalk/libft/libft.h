/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:27:54 by hbyeon            #+#    #+#             */
/*   Updated: 2023/05/03 12:50:35 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <signal.h>

struct sigaction	g_server_act;
struct sigaction	g_client_act;

typedef struct s_data
{
	pid_t			pid;
	char			*msg;
}			t_data;

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

#endif