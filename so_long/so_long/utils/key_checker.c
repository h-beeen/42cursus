/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 15:54:35 by hbyeon            #+#    #+#             */
/*   Updated: 2023/06/15 17:03:46 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	key_search(t_info *info, int y, int x)
{
	if (y < 0 || y >= info->h || x < 0 || x >= info->w || info->visited[y][x])
		return ;
	if (!info->visited[y][x])
	{
		if (info->map[y][x] == '0')
			key_count(info, y, x);
		else if (info->map[y][x] == 'C')
		{
			info->k_cnt++;
			key_count(info, y, x);
		}
		else if (info->map[y][x] == 'E')
			info->can_escape = 1;
	}
}

void	check_access_all_key(t_info *info)
{
	key_count(info, info->y, info->x);
	free_visited(info);
	if (info->k_cnt != info->c_cnt)
		error_exit_after_free("[Error] Can't access some carrots", info);
	else if (!(info->can_escape))
		error_exit_after_free("[Error] Can't escape to exit", info);
}

void	key_count(t_info *info, int y, int x)
{
	if (y < 0 || y >= info->h || x < 0 || x >= info->w || info->visited[y][x])
		return ;
	info->visited[y][x] = 1;
	key_search(info, y - 1, x);
	key_search(info, y + 1, x);
	key_search(info, y, x - 1);
	key_search(info, y, x + 1);
}
