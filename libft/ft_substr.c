/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 02:25:00 by hbyeon            #+#    #+#             */
/*   Updated: 2022/11/17 06:41:15 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	s_len;
	size_t	i;
	size_t	length;

	i = 0;
	s_len = ft_strlen(s);
	if (!s)
		return (0);
	if (s_len <= start)
	{
		start = 0;
		length = 1;
	}
	else if (len > s_len - start)
		length = s_len - start + 1;
	else
		length = len + 1;
	ptr = (char *)malloc(sizeof(char) * length);
	if (!ptr)
		return (0);
	ft_strlcpy (ptr, s + start, length);
	return (ptr);
}
