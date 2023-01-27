/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:36:27 by hbyeon            #+#    #+#             */
/*   Updated: 2023/01/27 20:03:35 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int main(void)
{
	int fd = open("test.txt", O_RDONLY);
	for(int i = 0; i < 1; i++)
		printf("%s", get_next_line(42));
	close(fd);
}