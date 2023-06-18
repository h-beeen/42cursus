/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:24:19 by hbyeon            #+#    #+#             */
/*   Updated: 2023/06/15 18:08:10 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_ber(char *path)
{
	int	i;

	i = ft_strlen(path);
	if (i < 5)
		return (0);
	if (path[i - 4] != '.' || path[i - 3] != 'b' || path[i - 2] != 'e' || \
			path[i - 1] != 'r')
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	t_info	info;

	if (argc != 2 || !check_ber(argv[1]))
		error_exit("Usage: ./so_long ./maps/[MAP_FILE].ber");
	init_info(&info, argv[1]);
	parse_map(&info);
	info.win = mlx_new_window(info.mlx, info.img_len * info.w,
			info.img_len * info.h, "[42Seoul] hbyeon's kakao_long");
	draw_map(&info);
	mlx_hook(info.win, X_EVENT_KEY_RELEASE, 0, &key_press, &info);
	mlx_hook(info.win, X_EVENT_KEY_EXIT, 0, &mlx_destroy_exit, &info);
	mlx_loop(info.mlx);
	return (0);
}
