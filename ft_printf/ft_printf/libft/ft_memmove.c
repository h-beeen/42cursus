/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 01:04:23 by hbyeon            #+#    #+#             */
/*   Updated: 2022/11/23 10:04:22 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*temp1;
	unsigned char		*temp2;

	temp1 = (unsigned char *)dst;
	temp2 = (unsigned char *)src;
	i = -1;
	if (temp1 == temp2 || len == 0)
		return (dst);
	if (!temp1 && !temp2)
		return (0);
	if (dst < src)
		while (++i < len)
			temp1[i] = temp2[i];
	else
		while (++i < len)
			temp1[len - i - 1] = temp2[len - i - 1];
	return ((void *) temp1);
}
