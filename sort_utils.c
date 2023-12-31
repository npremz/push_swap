/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 09:34:13 by npremont          #+#    #+#             */
/*   Updated: 2023/11/29 11:16:32 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdbool.h>

void	ft_setindex(t_list *stack)
{
	size_t	i;
	size_t	median;

	if (!stack)
		return ;
	i = 0;
	median = ft_lstsize(stack) / 2;
	while (stack)
	{
		stack->index = i;
		if (i <= median)
			stack->above_median = true;
		else
			stack->above_median = false;
		stack = stack->next;
		++i;
	}
}

void	ft_settarget_a(t_list *a, t_list *b)
{
	t_list	*current_b;
	t_list	*target_node;
	long	val;

	while (a)
	{
		current_b = b;
		val = LONG_MIN;
		while (current_b)
		{
			if (current_b->nbr > val && current_b->nbr < a->nbr)
			{
				target_node = current_b;
				val = current_b->nbr;
			}
			current_b = current_b->next;
		}
		if (val == LONG_MIN)
			a->target = ft_get_max(b);
		else
			a->target = target_node;
		a = a->next;
	}
}

void	ft_settarget_b(t_list *a, t_list *b)
{
	t_list	*current_a;
	t_list	*target_node;
	long	val;

	while (b)
	{
		current_a = a;
		val = LONG_MAX;
		while (current_a)
		{
			if (current_a->nbr < val && current_a->nbr > b->nbr)
			{
				target_node = current_a;
				val = current_a->nbr;
			}
			current_a = current_a->next;
		}
		if (val == LONG_MAX)
			b->target = ft_get_min(a);
		else
			b->target = target_node;
		b = b->next;
	}
}

void	ft_getcost(t_list *a, t_list *b)
{
	size_t	len_a;
	size_t	len_b;

	len_a = ft_lstsize(a);
	len_b = ft_lstsize(b);
	while (a)
	{
		a->price = a->index;
		if (!(a->above_median))
			a->price = len_a - a->index;
		if (a->target->above_median)
			a->price += a->target->index;
		else
			a->price += len_b - a->target->index;
		a = a->next;
	}
}

void	ft_setcheapest(t_list *stack)
{
	long	val;
	t_list	*cheapest;

	if (!stack)
		return ;
	val = LONG_MAX;
	while (stack)
	{
		if (stack->price < val)
		{
			cheapest = stack;
			val = stack->price;
		}
		stack = stack->next;
	}
	cheapest->cheapest = true;
}
