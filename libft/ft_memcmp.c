/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 00:15:02 by hbyeon            #+#    #+#             */
/*   Updated: 2022/11/20 00:26:55 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		if (((const unsigned char *)s1)[i] != ((const unsigned char *)s2)[i])
			return (((const unsigned char *)s1)[i] - \
			((const unsigned char *)s2)[i]);
	return (0);
}
