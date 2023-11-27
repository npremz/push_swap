/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:27:01 by npremont          #+#    #+#             */
/*   Updated: 2023/11/27 16:10:29 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(int))
{
	t_list	*new_lst;
	t_list	*elem;
	t_list	**backup;

	new_lst = NULL;
	elem = NULL;
	backup = &new_lst;
	while (lst)
	{
		elem = ft_lstnew((*f)(lst->nbr));
		if (!elem)
			ft_lstclear(backup);
		ft_lstadd_back(&new_lst, elem);
		lst = lst->next;
	}
	return (new_lst);
}
