/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 20:32:08 by hbyeon            #+#    #+#             */
/*   Updated: 2023/05/09 20:46:25 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_atoi(const char *str)
{
	long long	sign;
	long long	temp;
	long long	result;

	result = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		temp = result;
		result = (result * 10) + (*str - '0');
		if (temp > result && sign == -1)
			return (0);
		else if (temp > result && sign == 1)
			return (-1);
		str++;
	}
	return (sign * result);
}

void	ft_atob(int pid, char c)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((c & (0x01 << bit)))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(500);
		bit++;
	}
}

int	main(int argc, char **argv)
{
	int	pid;
	int	i;

	i = 0;
	if (argc != 3)
	{
		write (1, "Error.", 6);
		return (1);
	}
	pid = ft_atoi(argv[1]);
	while (argv[2][i] != '\0')
	{
		ft_atob(pid, argv[2][i]);
		i++;
	}
	return (0);
}
