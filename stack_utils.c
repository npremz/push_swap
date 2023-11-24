/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:02:21 by npremont          #+#    #+#             */
/*   Updated: 2023/11/24 12:21:22 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_stackinit(char **argv)
{
	size_t	i;
	t_list	*stack;
	t_list	*node;

	i = 0;
	stack = NULL;
	node = NULL;
	while (argv[i])
	{
		node = ft_lstnew(argv[i]);
		if (!node)
			return (ft_lstclear(&stack, free), NULL);
		ft_lstadd_front(&stack, node);
		++i;
	}
	return (stack);
}
