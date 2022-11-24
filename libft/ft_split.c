/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:45:42 by hbyeon            #+#    #+#             */
/*   Updated: 2022/11/20 21:18:34 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	cnt;
	size_t	i;

	cnt = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			cnt++;
		while (s[i] != c && s[i])
			i++;
	}
	return (cnt);
}

static void	ft_free(char **temp, size_t words)
{
	size_t	i;

	i = -1;
	while (i < words)
		free(temp[++i]);
	free(temp);
}

static char	**ft_writesplit(char **temp, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		j = 0;
		while (s[i] == c)
			i++;
		while (s[i + j] != c && s[i + j])
			j++;
		temp[words] = (char *)malloc(sizeof(char) * j + 1);
		if (!temp[words])
		{
			ft_free(temp, words);
			return (0);
		}
		ft_strlcpy(temp[words], s + i, j + 1);
		i += j;
		words++;
	}
	return (temp);
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
		return (0);
	temp[words] = 0;
	temp = ft_writesplit(temp, s, c);
	return (temp);
}

// #include <stdio.h>
// int main (void)
// {

// 	ft_split("hello!", 32:' ');
// }