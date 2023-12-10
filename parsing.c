/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:17:12 by npremont          #+#    #+#             */
/*   Updated: 2023/11/30 11:45:36 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isvalid(char *str)
{
	size_t	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		++i;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			return (ft_printf("Error\n"), 0);
		++i;
	}
	return (1);
}

char	**ft_checkargs(char **argv)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = i + 1;
	while (argv[i])
	{
		if (ft_isvalid(argv[i]) == 0)
			return (ft_free_split(argv), NULL);
		j = i + 1;
		while (argv[j])
		{
			if (ft_strlen(argv[i]) > ft_strlen(argv[j]))
				len = ft_strlen(argv[i]);
			else
				len = ft_strlen(argv[j]);
			if (ft_strncmp(argv[i], argv[j], len) == 0)
				return (ft_free_split(argv), ft_printf("Error\n"), NULL);
			++j;
		}
		++i;
	}
	return (argv);
}

char	**ft_getargs(int argc, char **argv)
{
	int		i;
	char	*tmp;

	if (argc == 1)
		return (NULL);
	i = 1;
	tmp = ft_calloc(1, 1);
	if (!tmp)
		return (NULL);
	while (i < argc)
	{
		tmp = ft_strjoin(tmp, argv[i]);
		if (!tmp)
			return (NULL);
		++i;
	}
	argv = ft_split(tmp, ' ');
	if (!argv)
		return (free(tmp), NULL);
	argv = ft_checkargs(argv);
	if (!argv)
		return (free(tmp), NULL);
	free(tmp);
	return (argv);
}
