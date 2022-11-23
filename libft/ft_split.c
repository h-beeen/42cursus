/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 09:02:00 by hbyeon            #+#    #+#             */
/*   Updated: 2022/11/23 09:30:24 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			cnt++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (cnt);
}

static char	*ft_wordsplit(char *word, char const *s, int j, int word_len)
{
	int		i;

	i = 0;
	while (word_len > 0)
		word[i++] = s[j - word_len--];
	word[i] = '\0';
	return (word);
}

static void	ft_freeall(char **res, int i)
{
	if (i == 0)
		free(res[i]);
	while (i)
		free (res[--i]);
	free (res);
}

static char	**ft_split2(char **res, char const *s, char c, int word_count)
{
	int		i;
	int		j;
	int		word_len;

	i = 0;
	j = 0;
	word_len = 0;
	while (s[j] && i < word_count)
	{
		while (s[j] && s[j] == c)
			j++;
		while (s[j] && s[j] != c)
		{
			j++;
			word_len++;
		}
		res[i] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!res[i])
		{
			ft_freeall(res, i);
			return (0);
		}
		ft_wordsplit(res[i++], s, j, word_len);
		word_len = 0;
	}
	res[i] = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**res;

	if (s == 0)
		return (0);
	word_count = ft_wordcount(s, c);
	res = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!res)
		return (0);
	if (!ft_split2(res, s, c, word_count))
		return (0);
	return (res);
}
