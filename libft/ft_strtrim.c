/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 05:20:35 by hbyeon            #+#    #+#             */
/*   Updated: 2022/11/20 06:32:22 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	len;
	char			*temp;

	i = 0;
	len = ft_strlen(s1);
	if (!len)
		return (ft_strdup(s1));
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[len - 1] && ft_strchr(set, s1[len - 1]) && len >= 2)
		len--;
	if (i > len)
		return (ft_strdup(""));
	temp = (char *)malloc(sizeof(char) * (len - i + 1));
	if (!temp)
		return (0);
	ft_strlcpy(temp, s1 + i, len - i + 1);
	return (temp);
}
