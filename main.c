/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:30:10 by npremont          #+#    #+#             */
/*   Updated: 2023/11/27 17:13:46 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	t_list	*a;
	t_list	*b;

	if (ac == 1)
		return (1);
	av = ft_getargs(ac, av);
	if (!av)
		return (1);
	a = ft_stackinit(av);
	b = NULL;
	if (!a)
		return (1);
	if (!ft_stackissort(a))
	{
		if (ft_lstsize(a) == 2)
			sa(a);
		else if (ft_lstsize(a) == 3)
			ft_small_sort(&a);
	}
	while (a)
	{
		printf("%d\n", a->nbr);
		a = a->next;
	}
	ft_lstclear(&a);
	return (0);
}
