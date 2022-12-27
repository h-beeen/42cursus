/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 01:41:52 by hbyeon            #+#    #+#             */
/*   Updated: 2022/11/20 02:37:09 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_len(long long n)
{
	int	cnt;

	cnt = 0;
	if (n <= 0)
		cnt++;
	while (n)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

char	*ft_itoa(int n)
{
	int			cnt;
	long long	temp;
	char		*funny_itoa;

	temp = n;
	cnt = check_len(temp);
	if (temp < 0)
		temp = -temp;
	funny_itoa = (char *)malloc(sizeof(char) * (cnt + 1));
	if (!funny_itoa)
		return (0);
	if (temp == 0)
		funny_itoa[0] = 48;
	funny_itoa[cnt] = 0;
	while (temp)
	{
		funny_itoa[--cnt] = temp % 10 + 48;
		temp /= 10;
	}
	if (n < 0)
		funny_itoa[0] = '-';
	return (funny_itoa);
}
