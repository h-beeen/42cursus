/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 22:13:33 by hbyeon            #+#    #+#             */
/*   Updated: 2022/11/20 00:14:16 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char		*temp1;
	const unsigned char	*temp2;

	if (dst == 0 && src == 0)
		return (0);
	temp1 = (unsigned char *)dst;
	temp2 = (const unsigned char *)src;
	while (len--)
		*temp1++ = *temp2++;
	return (dst);
}
