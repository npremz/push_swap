/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 09:34:13 by npremont          #+#    #+#             */
/*   Updated: 2023/11/28 15:58:24 by npremont         ###   ########.fr       */
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
	long	val;

	val = b->nbr;
	while (a)
	{
		current_b = b;
		val = LONG_MIN;
		while (current_b)
		{
			if (current_b->nbr > val && current_b->nbr < a->nbr)
			{
				a->target = current_b;
				val = current_b->nbr;
			}
			current_b = current_b->next;
		}
		if (a->target == NULL)
			a->target = ft_lstlast(b);
		a = a->next;
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
