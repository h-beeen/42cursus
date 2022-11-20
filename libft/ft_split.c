/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 06:44:55 by hbyeon            #+#    #+#             */
/*   Updated: 2022/11/20 19:44:46 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordcount(char *s, char c)
{
	int	cnt;
	int	i;

	cnt = 0;
	i = 0;
	while (s[i] != c)
		i++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			cnt++;
		i++;
	}
	return (cnt);
}

void	ft_writesplit(char **temp, char *s, char set)
{
	int	i;
	int	j;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		j = 0;
		while (s[i] == set)
			i++;
		while (s[i + j] != set && s[i + j])
			j++;
		temp[words] = (char *)malloc(sizeof(char) * j + 1);
		ft_strlcpy(temp[words], s + i, j);
		i = i + j + 1;
		words++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**temp;
	size_t	words;
	size_t	i;

	i = 0;
	words = ft_wordcount(s, c);
	temp = (char **) malloc (sizeof(char *) * words + 1);
	if (!temp)
		return (NULL);
	temp[words] = 0;
	ft_writesplit(temp, s, c);
	return (temp);
}

#include <stdio.h>

int main (void)
{
	char	*res;
	char	**temp;

	res = "a!bb!ccc";
	temp = ft_split(res, '!');
	for(int i = 0; i < 3; i++)
		printf("%s", temp[i]);
}