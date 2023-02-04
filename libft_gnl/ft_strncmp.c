/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:10:42 by hbyeon            #+#    #+#             */
/*   Updated: 2023/02/04 22:13:43 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t			i;
	unsigned char	a;
	unsigned char	b;

	i = 0;
	a = s1[i];
	b = s2[i];
	while (s1[i] && s2[i] && i < n)
	{
		a = s1[i];
		b = s2[i];
		if (a != b)
			break ;
		i++;
	}
	if (i == n)
		return (0);
		a = s1[i];
		b = s2[i];
	return (a - b);
}
