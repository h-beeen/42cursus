/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printargs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 04:22:11 by hbyeon            #+#    #+#             */
/*   Updated: 2023/01/17 17:27:59 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	i;

	i = -1;
	if (s == NULL)
		return (write(1, "(null)", 6));
	while (s[++i])
	{
		if (write(1, &s[i], 1) < 0)
			return (-1);
	}
	return (i);
}

int	ft_putnbr(int n, int *cnt)
{
	long long	temp;

	temp = (long long) n;
	if (temp < 0)
	{
		temp = temp * -1;
		if (ft_putchar('-') < 0)
			return (-1);
		*cnt += 1;
	}
	if (temp >= 10)
		ft_putnbr(temp / 10, cnt);
	if (ft_putchar(temp % 10 + 48) < 0)
		return (-1);
	*cnt += 1;
	return (*cnt);
}

int	ft_sw(unsigned long long nb, char f, int *cnt)
{
	if (nb >= 16)
	{
		ft_sw(nb / 16, f, cnt);
		ft_sw(nb % 16, f, cnt);
	}
	else
	{
		if (f == 'x' || f == 'p')
		{
			if (ft_putchar("0123456789abcdef"[nb]) < 0)
				return (-1);
			*cnt += 1;
		}
		if (f == 'X')
		{
			if (ft_putchar("0123456789ABCDEF"[nb]) < 0)
				return (-1);
			*cnt += 1;
		}
	}
	return (*cnt);
}

int	ft_putunbr(unsigned int n, int *cnt)
{
	long long	temp;

	temp = (long long) n;
	if (temp < 0)
	{
		temp = temp * -1;
		if (ft_putchar('-') < 0)
			return (-1);
		*cnt += 1;
	}
	if (temp >= 10)
		ft_putunbr(temp / 10, cnt);
	if (ft_putchar(temp % 10 + 48) < 0)
		return (-1);
	*cnt += 1;
	return (*cnt);
}
