/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exception.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:09:20 by hbyeon            #+#    #+#             */
/*   Updated: 2023/05/03 13:09:21 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_exception(char *exception)
{
	ft_putstr_fd("ERROR : ", 1);
	ft_putstr_fd(exception, 1);
	ft_putchar_fd('\n', 1);
	exit(1);
}
