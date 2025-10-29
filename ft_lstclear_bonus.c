/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouygui <nbouygui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:24:37 by nbouygui          #+#    #+#             */
/*   Updated: 2025/10/28 09:44:55 by nbouygui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		node = (*lst);
		(*lst) = (*lst)->next;
		ft_lstdelone(node, del);
	}
	(*lst) = NULL;
}
