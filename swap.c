/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:01:55 by npremont          #+#    #+#             */
/*   Updated: 2023/11/24 16:31:30 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_list *stack)
{
	void	*tmp;

	tmp = stack->content;
	stack->content = stack->next->content;
	stack->next->content = tmp;
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
