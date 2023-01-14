/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_s.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:24:38 by hbyeon            #+#    #+#             */
/*   Updated: 2023/01/14 14:15:30 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_argument_s(char *string)
{
	if (string == NULL)
		return (write(1, "(null)", 6));
	ft_putstr_fd(string, 1);
	return (ft_strlen(string));
}