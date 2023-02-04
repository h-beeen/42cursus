/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 00:41:32 by hbyeon            #+#    #+#             */
/*   Updated: 2023/02/04 22:22:58 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_gnlfree(char **str)
{
	free(*str);
	*str = NULL;
	return (NULL);
}

char	*ft_gnlrestore(char *storage)
{
	char	*new_storage;
	char	*ptr;
	int		len;

	ptr = ft_strchr(storage, '\n');
	if (!ptr)
	{
		new_storage = NULL;
		return (ft_gnlfree(&storage));
	}
	else
		len = (ptr - storage) + 1;
	if (!storage[len])
		return (ft_gnlfree(&storage));
	new_storage = ft_substr(storage, len, ft_strlen(storage) - len);
	ft_gnlfree(&storage);
	if (!new_storage)
		return (NULL);
	return (new_storage);
}

char	*ft_gnlnewline(char *storage)
{
	char	*line;
	char	*ptr;
	int		len;

	ptr = ft_strchr(storage, '\n');
	len = (ptr - storage) + 1;
	line = ft_substr(storage, 0, len);
	if (!line)
		return (NULL);
	return (line);
}

char	*ft_gnlreadbuf(int fd, char *storage)
{
	int		flag;
	char	*buffer;

	flag = 1;
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (ft_gnlfree(&storage));
	buffer[0] = '\0';
	while (flag > 0 && !ft_strchr(buffer, '\n'))
	{
		flag = read (fd, buffer, BUFFER_SIZE);
		if (flag > 0)
		{
			buffer[flag] = '\0';
			storage = ft_gnljoin(storage, buffer);
		}
	}
	free(buffer);
	if (flag == -1)
		return (ft_gnlfree(&storage));
	return (storage);
}

char	*get_next_line(int fd)
{
	static char	*storage;
	char		*line;

	if (fd < 0)
		return (NULL);
	if ((storage && !ft_strchr(storage, '\n')) || !storage)
		storage = ft_gnlreadbuf (fd, storage);
	if (!storage)
		return (NULL);
	line = ft_gnlnewline(storage);
	if (!line)
		return (ft_gnlfree(&storage));
	storage = ft_gnlrestore(storage);
	return (line);
}
