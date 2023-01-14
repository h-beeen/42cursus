/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:04:00 by hbyeon            #+#    #+#             */
/*   Updated: 2022/11/17 01:01:44 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	temp;
	const char		*temp2;

	temp = c;
	temp2 = 0;
	while (*s)
	{
		if (*s == temp)
			temp2 = s;
		s++;
	}
	if (temp == 0)
		return ((char *) s);
	return ((char *) temp2);
}
