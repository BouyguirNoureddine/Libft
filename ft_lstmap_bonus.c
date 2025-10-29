/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouygui <nbouygui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:32:22 by nbouygui          #+#    #+#             */
/*   Updated: 2025/10/28 16:48:20 by nbouygui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_freeall(void *ptr, t_list *list, void (*del)(void *))
{
	if (!ptr)
	{
		ft_lstclear(&list, del);
		return (1);
	}
	return (0);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*list;

	if (!lst || !f || !del)
		return (NULL);
	map = ft_calloc(1, sizeof(t_list));
	if (!map)
		return (NULL);
	list = map;
	while (lst)
	{
		map->content = f (lst->content);
		if (ft_freeall(map->content, list, del))
			return (NULL);
		lst = lst->next;
		if (lst)
		{
			map->next = ft_calloc(1, sizeof(t_list));
			if (ft_freeall(map->next, list, del))
				break ;
			map = map->next;
		}
	}
	return (list);
}
