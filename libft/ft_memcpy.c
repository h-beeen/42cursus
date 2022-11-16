/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:55:27 by hbyeon            #+#    #+#             */
/*   Updated: 2022/11/16 23:37:55 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*temp1;
	unsigned char		*temp2;

	i = 0;
	temp1 = (unsigned char *)dst;
	temp2 = (unsigned char *)src;
	if (temp1 == 0 && temp2 == 0)
		return (0);
	while (i < n)
	{
		temp1[i] = temp2[i];
		i++;
	}
	return ((void *) temp1);
}
