/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:04:00 by hbyeon            #+#    #+#             */
/*   Updated: 2022/11/16 22:51:44 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	temp;

	temp = c;
	while (*s)
	{
		if (*s == temp)
			return ((char *) s);
		s++;
	}
	if (temp == 0)
		return ((char *) s);
	return ((void *) 0);
}
