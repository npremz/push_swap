/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:37:30 by npremont          #+#    #+#             */
/*   Updated: 2023/11/24 15:59:50 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_list **dst, t_list **src)
{
	t_list	*node;

	if (!src)
		return ;
	node = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	node->prev = NULL;
	if (!*dst)
	{
		*dst = node;
		node->next = NULL;
	}
	else
	{
		node->next = *dst;
		node->next->prev = node;
		*dst = node;
	}
}

void	pa(t_list **a, t_list **b)
{
	ft_push(a, b);
	ft_printf("pa\n");
}

void	pb(t_list **b, t_list **a)
{
	ft_push(b, a);
	ft_printf("pb\n");
}

void	ft_prep_for_push(t_list **stack, t_list *top_node, char name)
{
	while (*stack != top_node)
	{
		if (name == 'a')
		{
			if (top_node->above_median)
			{
				ra(stack);
			}
			else
				rra(stack);
		}
		if (name == 'b')
		{
			if (top_node->above_median)
				rb(stack);
			else
				rrb(stack);
		}
		break;
	}
}