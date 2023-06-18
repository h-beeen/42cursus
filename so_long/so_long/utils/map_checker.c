/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:48:14 by hbyeon            #+#    #+#             */
/*   Updated: 2023/06/15 16:19:24 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_visited(t_info *info)
{
	int	i;

	i = -1;
	info->visited = (int **)malloc(info->h * sizeof(int *) + 1);
	if (info->visited == NULL)
		return ;
	while (++i < info->h)
	{
		info->visited[i] = (int *)malloc(info->w * sizeof(int));
		if (info->visited[i] == NULL)
			return ;
		ft_memset(info->visited[i], 0, info->w * sizeof(int));
	}
}

void	free_visited(t_info *info)
{
	int	i;

	i = -1;
	while (++i < info -> h)
		free(info->visited[i]);
	free(info->visited);
}
