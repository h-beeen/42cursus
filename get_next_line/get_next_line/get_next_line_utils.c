/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 20:14:16 by hbyeon            #+#    #+#             */
/*   Updated: 2023/01/23 13:42:17 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *storage, char *s2)
{
	char	*ptr;

	if (!storage)
		storage = ft_strdup("");
	ptr = (char *)malloc(sizeof(char) * ft_strlen(storage) + ft_strlen(s2) + 1);
	if (!ptr)
		return (ft_free(&storage));
	ft_strlcpy(ptr, storage, ft_strlen(storage) + 1);
	ft_strlcpy(ptr + ft_strlen(storage), s2, ft_strlen(s2) + 1);
	free(storage);
	return (ptr);
}

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
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

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	s_len;
	size_t	length;

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

char	*ft_strdup(char *storage)
{
	size_t	i;
	size_t	str_len;
	char	*ptr;

	i = -1;
	str_len = ft_strlen (storage);
	ptr = (char *)malloc(sizeof(char) * (str_len + 1));
	if (!ptr)
		return (0);
	while (storage[++i] != '\0')
		ptr[i] = storage[i];
	ptr[i] = storage[i];
	return (ptr);
}

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}