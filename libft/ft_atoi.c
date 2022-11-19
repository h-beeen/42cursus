/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 23:43:26 by hbyeon            #+#    #+#             */
/*   Updated: 2022/11/20 01:35:16 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			sign;
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
