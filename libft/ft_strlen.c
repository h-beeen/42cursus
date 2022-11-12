/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:00:10 by hbyeon            #+#    #+#             */
/*   Updated: 2022/11/10 22:28:04 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main (void)
{
	printf("%d", ft_strlen("c"));
	printf("%d", strlen("c"));
}