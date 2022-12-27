/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:02:01 by hbyeon            #+#    #+#             */
/*   Updated: 2022/11/16 22:55:02 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	temp;

	i = 0;
	if (!needle[i])
		return ((char *) haystack);
	while (haystack[i] && i < len)
	{
		temp = 0;
		while (haystack[i + temp] == needle[temp] && i + temp < len \
		&& haystack[i + temp])
			temp++;
		if (needle[temp] == '\0')
			return (((char *) haystack) + i);
		i++;
	}
	return (0);
}
