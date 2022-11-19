/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 03:38:18 by hbyeon            #+#    #+#             */
/*   Updated: 2022/11/20 04:13:04 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*temp;

	len = ft_strlen(s);
	i = -1;
	temp = (char *)malloc(sizeof(char) * len + 1);
	if (!temp)
		return (0);
	while (++i < len)
		temp[i] = (*f)(i, s[i]);
	temp[i] = '\0';
	return (temp);
}
