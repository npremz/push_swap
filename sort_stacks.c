/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 09:19:56 by npremont          #+#    #+#             */
/*   Updated: 2023/11/28 16:26:48 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_min_on_top(t_list **a)
{
	t_list	*min_node;

	min_node = ft_get_min(*a);
	while (*a != min_node)
	{
		if (min_node->above_median)
		{
			ra(a);
		}
		else
			rra(a);
	}
}

void	ft_move_b2a(t_list **a, t_list **b)
{
	ft_prep_for_push(a, (*b)->target, 'a');
	pa(a, b);
}

void	ft_move_a2b(t_list **a, t_list **b)
{
	t_list	*cheapest;

	cheapest = ft_get_cheapest(*a);
	if (cheapest->above_median && cheapest->target->above_median)
		ft_rotate_both(a, b, cheapest);
	else if (!cheapest->above_median && !cheapest->target->above_median)
		ft_rev_rotate_both(a, b, cheapest);
	ft_prep_for_push(a, cheapest, 'a');
	ft_prep_for_push(b, cheapest->target, 'b');
	pb(b, a);
}

void	ft_sort_stacks(t_list **a, t_list **b)
{
	size_t	len;

	len = ft_lstsize(*a);
	if (len-- > 3 && !ft_stackissort(*a))
		pb(b, a);
	if (len-- > 3 && !ft_stackissort(*a))
		pb(b, a);
	while (len-- > 3 && !ft_stackissort(*a))
	{
		ft_init_stack_a(*a, *b);
		ft_move_a2b(a, b);
	}
	ft_small_sort(a);
	while (*b)
	{
		ft_init_stack_b(*a, *b);
		ft_move_b2a(a, b);
	}
	ft_setindex(*a);
	ft_min_on_top(a);
}
