/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:06:37 by npremont          #+#    #+#             */
/*   Updated: 2023/11/28 09:58:52 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tail;

	if (*lst)
	{
		tail = ft_lstlast(*lst);
		tail->next = new;
		tail->next->prev = tail;
		tail->next->next = NULL;
	}
	else
		*lst = new;
}
