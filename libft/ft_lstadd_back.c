/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:50:55 by hbyeon            #+#    #+#             */
/*   Updated: 2022/11/23 13:20:24 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if (*lst == 0 && new)
	{
		*lst = new;
		return (0);
	}
	else if (!lst || !new)
		return (0);
	while ((*lst)->next)
		*lst = (*lst)->next;
	(*lst)->next = new;
	*lst = temp;
	return (temp);
}
