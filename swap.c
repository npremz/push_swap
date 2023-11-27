/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:01:55 by npremont          #+#    #+#             */
/*   Updated: 2023/11/27 15:58:47 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_list *stack)
{
	int	tmp;

	tmp = stack->nbr;
	stack->nbr = stack->next->nbr;
	stack->next->nbr = tmp;
}

void	sa(t_list *a)
{
	ft_swap(a);
	ft_printf("sa\n");
}

void	sb(t_list *b)
{
	ft_swap(b);
	ft_printf("sb\n");
}

void	ss(t_list *a, t_list *b)
{
	ft_swap(a);
	ft_swap(b);
	ft_printf("ss\n");
}
