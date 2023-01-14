/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printargs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 04:22:11 by hbyeon            #+#    #+#             */
/*   Updated: 2023/01/14 21:16:39 by hbyeon           ###   ########.fr       */
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
		ft_putchar('-');
		cnt++;
	}
	if (temp >= 10)
		ft_putnbr(temp / 10, cnt);
	ft_putchar(temp % 10 + 48);
	*cnt += 1;
	return (*cnt);
}

int ft_puthex(unsigned long long hex)
{
	char	*base;
	char	*base_2;

	base = "0123456789abcdef";
	base = "0123456789ABCDEF";
	if (nb < 16 && prev == 1) 
		ft_putchar_size('0', 1);
	if (nb >= 16)
	{ 
		ft_hex(nb / 16, 0);
		ft_hex(nb % 16, 0);
	}
	else
		ft_putchar_size(base[nb], 1);
}