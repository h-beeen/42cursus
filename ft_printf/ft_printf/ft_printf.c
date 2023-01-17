/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:20:06 by hbyeon            #+#    #+#             */
/*   Updated: 2023/01/17 14:36:57 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 구현 :, p, u, x, X

#include "ft_printf.h"

int	ft_specifier(va_list ap, const char *form)
{
	int	cnt;

	cnt = 0;
	if (*form == 'c')
		return (ft_putchar(va_arg(ap, int)));
	if (*form == 's')
		return (ft_putstr(va_arg(ap, char *)));
	if (*form == 'd' || *form == 'i')
		return (ft_putnbr(va_arg(ap, int), &cnt));
	if (*form == '%')
		return (ft_putchar('%'));
	if (*form == 'x' || *form == 'X')
		return (ft_itoabase(va_arg(ap, unsigned long long), *form, &cnt));
	else
		return (-1);
}

int	ft_printf(const char *form, ...)
{
	int			result;
	int			len;
	va_list		ap;

	result = 0;
	len = 0;
	va_start(ap, form);
	while (*form)
	{
		if (*form == '%')
		{
			len = ft_specifier(ap, form + 1);
			form += 2;
		}
		else
			len = write(1, form++, 1);
		if (len >= 0)
			result += len;
		else
			return (-1);
	}
	va_end(ap);
	return (result);
}

#include <stdio.h>
int main(void)
{
	ft_printf("ft_printf : %u\n", 2147384647);
	printf("ft_printf : %u\n", 2147384647);
}