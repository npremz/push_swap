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

void	ft_init_stack(t_list *a, t_list *b)
{
	ft_setindex(a);
	ft_setindex(b);
	ft_settarget_a(a, b);
	ft_getcost(a, b);
	ft_setcheapest(a);
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
		ft_init_stack(*a, *b);
		ft_move_a2b(a, b);
	}
	ft_small_sort(a);
	while (*b)
	{
		
	}
}
