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

void	ft_rotate_both(t_list **a, t_list **b, t_list *cheapest)
{
	while (*b != cheapest->target && *a != cheapest)
	{
		rr(a, b);
	}
	ft_setindex(*a);
	ft_setindex(*b);
}

void	ft_rev_rotate_both(t_list **a, t_list **b, t_list *cheapest)
{
	while (*b != cheapest->target && *a != cheapest)
		rrr(a, b);
	ft_setindex(*a);
	ft_setindex(*b);
}