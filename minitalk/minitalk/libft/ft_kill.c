/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_kill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:09:15 by hbyeon            #+#    #+#             */
/*   Updated: 2023/05/03 13:09:16 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_kill(pid_t pid, int signo)
{
	if (kill(pid, signo) != 0)
	{
		ft_exception("INVALID PID or KILL ERROR");
		exit(1);
	}
	else
		usleep(125);
}
