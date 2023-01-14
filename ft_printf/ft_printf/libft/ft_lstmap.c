/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 22:46:39 by hbyeon            #+#    #+#             */
/*   Updated: 2022/11/24 16:42:19 by hbyeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*temp;
	void	*tt;

	if (!lst || !f)
		return (0);
	res = 0;
	while (lst)
	{
		tt = (*f)(lst->content);
		temp = ft_lstnew(tt);
		if (!temp)
		{
			del(tt);
			ft_lstclear(&res, del);
			return (0);
		}
		ft_lstadd_back(&res, temp);
		temp = temp->next;
		lst = lst->next;
	}
	return (res);
}
