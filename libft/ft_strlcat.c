/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 08:49:46 by hbyeon            #+#    #+#             */
/*   Updated: 2022/11/16 19:43:47 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	unsigned int	j;
	unsigned int	src_len;
	unsigned int	dst_len;

	j = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (size + src_len);
	else
	{
		while (src[j] != '\0' && (dst_len + j + 1 < size))
		{	
			dst[dst_len + j] = src[j];
			j++;
		}
		dst[dst_len + j] = '\0';
	}
	return (src_len + dst_len);
}
