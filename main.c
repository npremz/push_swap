/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:30:10 by npremont          #+#    #+#             */
/*   Updated: 2023/11/24 16:42:55 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	char	**argv;
	t_list	*a;
	t_list	*b;

	argv = ft_getargs(ac, av);
	if (!argv)
		return (1);
	a = ft_stackinit(argv);
	b = NULL;
	if (!a)
		return (ft_free_split(argv), 1);
	rra(&a);
	while (a)
	{
		printf("a : %s, %p\n", (char *)a->content, a);
		a = a->next;
	}
	printf("\n");
	while (b)
	{
		printf("b : %s, %p\n", (char *)b->content, b);
		b = b->next;
	}
	return (0);
}
