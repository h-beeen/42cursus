/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:37:32 by hbyeon            #+#    #+#             */
/*   Updated: 2023/05/03 12:44:41 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_charjoin(char *str, char ch)
{
	size_t	str_len;
	char	*ptr;
	int		i;

	if (!str)
		return (NULL);
	str_len = ft_strlen((char *)str);
	ptr = malloc(str_len + sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i++] = ch;
	ptr[i] = '\0';
	free(str);
	return (ptr);
}
