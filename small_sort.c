/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:06:32 by npremont          #+#    #+#             */
/*   Updated: 2023/11/27 17:14:54 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_small_sort(t_list **stack)
{
	t_list	*biggest_node;

	biggest_node = ft_get_max(*stack);
	if (biggest_node == *stack)
		ra(stack);
	else if (biggest_node == (*stack)->next)
		rra(stack);
	if ((*stack)->nbr > (*stack)->next->nbr)
		sa(*stack);
}
