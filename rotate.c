/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:51:29 by npremont          #+#    #+#             */
/*   Updated: 2023/11/24 16:39:54 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_list **stack)
{
	t_list	*last_node;
	int		len;

	len = ft_lstsize(*stack);
	if (!stack || !*stack || len == 1)
		return ;
	last_node = ft_lstlast(*stack);
	last_node->next = (*stack);
	(*stack) = (*stack)->next;
	(*stack)->prev = NULL;
	last_node->next->prev = last_node;
	last_node->next->next = NULL;
}

void	ra(t_list **a)
{
	ft_rotate(a);
	ft_printf("ra\n");
}

void	rb(t_list **b)
{
	ft_rotate(b);
	ft_printf("rb\n");
}

void	rr(t_list **a, t_list **b)
{
	ft_rotate(a);
	ft_rotate(b);
	ft_printf("rr\n");
}
