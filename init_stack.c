/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:30:10 by npremont          #+#    #+#             */
/*   Updated: 2023/11/28 10:30:56 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init_stack_a(t_list *a, t_list *b)
{
	ft_setindex(a);
	ft_setindex(b);
	ft_settarget_a(a, b);
	ft_getcost(a, b);
	ft_setcheapest(a);
}

void	ft_init_stack_b(t_list *a, t_list *b)
{
	ft_setindex(a);
	ft_setindex(b);
	ft_settarget_b(a, b);
}