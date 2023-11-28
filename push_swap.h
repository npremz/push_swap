/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:30:01 by npremont          #+#    #+#             */
/*   Updated: 2023/11/28 15:59:58 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "libft/libft.h"
#include <stdio.h>
#include <stdlib.h>

/* PARSING */

char **ft_getargs(int argc, char **argv);
void ft_free_split(char **split);
void ft_free(void *ptr);
t_list *ft_stackinit(char **argv);
void ft_swap(t_list *stack);
void sa(t_list *a);
void sb(t_list *b);
void ss(t_list *a, t_list *b);
void ft_push(t_list **dst, t_list **src);
void pa(t_list **a, t_list **b);
void pb(t_list **b, t_list **a);
void ft_rotate(t_list **stack);
void ra(t_list **a);
void rb(t_list **b);
void rr(t_list **a, t_list **b);
void ft_reverse_rotate(t_list **stack);
void rra(t_list **a);
void rrb(t_list **b);
void rrr(t_list **a, t_list **b);
bool ft_stackissort(t_list *stack);
t_list *ft_get_min(t_list *stack);
t_list *ft_get_max(t_list *stack);
void ft_small_sort(t_list **stack);
void ft_sort_stacks(t_list **a, t_list **b);
void ft_init_stack_a(t_list *a, t_list *b);
void ft_init_stack_b(t_list *a, t_list *b);
void ft_setindex(t_list *a);
void ft_settarget_a(t_list *a, t_list *b);
void ft_settarget_b(t_list *a, t_list *b);
void ft_getcost(t_list *a, t_list *b);
void ft_setcheapest(t_list *stack);
t_list *ft_get_cheapest(t_list *stack);
void ft_rotate_both(t_list **a, t_list **b, t_list *cheapest);
void ft_rev_rotate_both(t_list **a, t_list **b, t_list *cheapest);
void ft_prep_for_push(t_list **stack, t_list *top_node, char name);

#endif
