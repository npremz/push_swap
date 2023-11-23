/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:30:10 by npremont          #+#    #+#             */
/*   Updated: 2023/11/23 14:26:33 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	char	**argv;
	size_t	i;

	i = 0;
	argv = ft_getargs(ac, av);
	if (!argv)
		return (1);
	while (argv[i])
		ft_printf("%s\n", argv[i++]);
	
	return (0);
}
