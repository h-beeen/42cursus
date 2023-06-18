/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:24:24 by hbyeon            #+#    #+#             */
/*   Updated: 2023/06/15 20:10:35 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_up(t_info *info)
{
	if (info->map[info->y - 1][info->x] == '1')
		return ;
	else if (info->map[info->y - 1][info->x] == 'E')
	{
		if (info->c_cnt == 0)
		{
			ft_putstr_fd("move count : ", 1);
			ft_putnbr_fd(info->move_cnt + 1, 1);
			ft_putchar_fd('\n', 1);
			mlx_destroy_exit(info);
		}
		else
			return ;
	}
	else if (info->map[info->y - 1][info->x] == 'C')
		info->c_cnt--;
	info->map[info->y][info->x] = '0';
	info->map[info->y - 1][info->x] = 'P';
	info->move_cnt++;
	info->y--;
	ft_putstr_fd("move count : ", 1);
	ft_putnbr_fd(info->move_cnt, 1);
	ft_putchar_fd('\n', 1);
}

void	move_left(t_info *info)
{
	if (info->map[info->y][info->x - 1] == '1')
		return ;
	else if (info->map[info->y][info->x - 1] == 'E')
	{
		if (info->c_cnt == 0)
		{
			ft_putstr_fd("move count : ", 1);
			ft_putnbr_fd(info->move_cnt + 1, 1);
			ft_putchar_fd('\n', 1);
			mlx_destroy_exit(info);
		}
		else
			return ;
	}
	else if (info->map[info->y][info->x - 1] == 'C')
		info->c_cnt--;
	info->map[info->y][info->x] = '0';
	info->map[info->y][info->x - 1] = 'P';
	info->move_cnt++;
	info->x--;
	ft_putstr_fd("move count : ", 1);
	ft_putnbr_fd(info->move_cnt, 1);
	ft_putchar_fd('\n', 1);
}

void	move_down(t_info *info)
{
	if (info->map[info->y + 1][info->x] == '1')
		return ;
	else if (info->map[info->y + 1][info->x] == 'E')
	{
		if (info->c_cnt == 0)
		{
			ft_putstr_fd("move count : ", 1);
			ft_putnbr_fd(info->move_cnt + 1, 1);
			ft_putchar_fd('\n', 1);
			mlx_destroy_exit(info);
		}
		else
			return ;
	}
	if (info->map[info->y + 1][info->x] == 'C')
		info->c_cnt--;
	info->map[info->y][info->x] = '0';
	info->map[info->y + 1][info->x] = 'P';
	info->move_cnt++;
	info->y++;
	ft_putstr_fd("move count : ", 1);
	ft_putnbr_fd(info->move_cnt, 1);
	ft_putchar_fd('\n', 1);
}

void	move_right(t_info *info)
{
	if (info->map[info->y][info->x + 1] == '1')
		return ;
	else if (info->map[info->y][info->x + 1] == 'E')
	{
		if (info->c_cnt == 0)
		{
			ft_putstr_fd("move count : ", 1);
			ft_putnbr_fd(info->move_cnt + 1, 1);
			ft_putchar_fd('\n', 1);
			mlx_destroy_exit(info);
		}
		else
			return ;
	}
	if (info->map[info->y][info->x + 1] == 'C')
		info->c_cnt--;
	info->map[info->y][info->x] = '0';
	info->map[info->y][info->x + 1] = 'P';
	info->move_cnt++;
	info->x++;
	ft_putstr_fd("move count : ", 1);
	ft_putnbr_fd(info->move_cnt, 1);
	ft_putchar_fd('\n', 1);
}

int	key_press(int key, t_info *info)
{
	if (key == KEY_W)
		move_up(info);
	else if (key == KEY_A)
		move_left(info);
	else if (key == KEY_S)
		move_down(info);
	else if (key == KEY_D)
		move_right(info);
	else if (key == KEY_ESC)
		mlx_destroy_exit(info);
	else
		return (0);
	draw_map(info);
	return (1);
}
