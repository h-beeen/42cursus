/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:29:09 by hbyeon            #+#    #+#             */
/*   Updated: 2023/01/14 21:36:56 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_specifier(va_list ap, const char *form);
int		ft_printf(const char *form, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int n, int *cnt);
int		check_len(long long n);
char	*ft_itoa(int n);
int		ft_printhex(unsigned int n);

#endif