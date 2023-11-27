/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:52:08 by npremont          #+#    #+#             */
/*   Updated: 2023/11/27 16:54:57 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;
	long	value;

	elem = NULL;
	value = 0;
	elem = (t_list *)malloc(sizeof(t_list));
	if (elem)
	{
		value = ft_atol((char *)content);
		if (value > INT_MAX || value < INT_MIN)
			return (free(elem), NULL);
		elem->nbr = value;
		elem->next = NULL;
		elem->prev = NULL;
	}
	return (elem);
}
