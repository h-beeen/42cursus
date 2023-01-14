/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:20:06 by hbyeon            #+#    #+#             */
/*   Updated: 2023/01/14 21:18:55 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 구현 : c, s, p, d ,i, u, x, X, %

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
	else
		return (-1);
}

int	ft_printf(const char *form, ...)
{
	int			result;
	va_list		ap;

	result = 0;
	va_start(ap, form);
	while (*form)
	{
		if (*form == '%')
		{
			ft_specifier(ap, form + 1);
			form++;
		}
		else
			ft_putchar(*form);
		form++;
	}
	va_end(ap);
	return (result);
}

#include <stdio.h>

int main(void)
{
	printf("%%369\n");
	ft_printf("%%369");
	return (0);
}